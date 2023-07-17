#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

template<typename T>
struct LST{
    private:
        const T INF = numeric_limits<T>::max();
        int n;
        vector<T> dat,lazy;
        vector<bool> flag;
    public:
        LST(vector<T> &a): n(),dat(),lazy(),flag(){
            int sz = a.size();
            int x=1; while(sz>x) x*=2;
            n = x;
            dat.resize(2*n-1); lazy.resize(2*n-1,INF); flag.resize(2*n-1,false);
            for( int i=0; i<sz; ++i ){
                int j = i+n-1;
                dat[j] = a[i];
                while(j>0){
                    j = (j-1)/2;
                    dat[j] = min(dat[2*j+1],dat[2*j+2]);
                }
            }
        }
        // if we use smaller sec., add lazy to child node 
        void eval(int k, int l, int r){
            if(flag[k]){
                dat[k] = lazy[k];
                if(r-l>1){
                    lazy[2*k+1] = lazy[2*k+2] = lazy[k];
                    flag[2*k+1] = flag[2*k+2] = true;
                }
                flag[k]=false;
            }
            return;
        }
        void update(int a, int b, int x){ update_init(a,b,x,0,0,n); }
        void update_init(int a, int b, int x, int k, int l, int r){
            eval(k,l,r); // process stocked date in lazy
            if( b<=l or r<=a ) return;
            if( a<=l and r<=b){
                lazy[k] = x; flag[k] = true;
                eval(k,l,r); // update lazy
                return;
            }
            int mid = (l+r)/2;
            update_init(a,b,x,2*k+1,l,mid);
            update_init(a,b,x,2*k+2,mid,r);
            dat[k] = min(dat[2*k+1],dat[2*k+2]);
            return;
        }
        T query( int a, int b){ return query_init(a,b,0,0,n); }
        T query_init( int a, int b, int k, int l, int r ){
            eval(k,l,r);
            if( b<=l or r<=a ) return INF;
            if( a<=l and r<=b) return dat[k];
            int mid = (l+r)/2;
            T vl = query_init(a,b,2*k+1,l,mid);
            T vr = query_init(a,b,2*k+2,mid,r);
            return min(vr,vl);
        }
};

int compress( int n, int L, vector<int> &x1, vector<int> &x2 ){
    vector<int> x_tot;
    for( int i=0; i<n; ++i )for( int d=-1; d<=1; ++d ){
        int tx1 = x1[i]+d, tx2 = x2[i]+d;
        if( 0 <= tx1 and tx1 < L ) x_tot.push_back(tx1);
        if( 0 <= tx2 and tx2 < L ) x_tot.push_back(tx2);
    }
    sort(x_tot.begin(),x_tot.end());
    x_tot.erase( unique(x_tot.begin(),x_tot.end()), x_tot.end() );
    for( int i=0; i<n; ++i ){
        x1[i] = lower_bound(x_tot.begin(),x_tot.end(),x1[i]) - x_tot.begin();
        x2[i] = lower_bound(x_tot.begin(),x_tot.end(),x2[i]) - x_tot.begin();
    }
    return x_tot.size();
}

void job(){
    int n,rmax=1;
    cin >> n;
    vector<int> l(n),r(n);
    rep(i,n){
        cin >> l[i] >> r[i]; --l[i];
    }
    compress( n, 1e9+1, l, r );
    rep(i,n) rmax = max(rmax,r[i]);
    vector<int> arr(rmax,0);
    LST<int> rmq(arr);
    rep(i,n){
        rmq.update(l[i],r[i],1);
        if( rmq.query(l[i],r[i])>1 ){
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
    return;
}

int main(){
    int t;
    cin >> t;
    rep(i,t) job();
    return 0;
}