#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;


template<typename T> // datatype T
struct BIT{
    int n;
    vector<T> d;
    BIT(int n=0):n(n),d(n+1) {}
    void add( int i, T x=1 ){
        for( i++; i <= n; i += i&-i ){  //i&-i: Least significant bit
            d[i] += x;
        }
    }
    // get result
    T sum( int i ){
        T x=0;
        for( i++; i; i -= i&-i ){
            x +=d[i];
        }
        return x;
    }
    T sum( int l, int r ){
        return sum(r-1)-sum(l-1);
    }
};

void duplicated_sections( vector<vector<int>> &ps, int N, vector<int> &c ){
    vector<int> pi(N+1,-1); // index each #color appear at last
    rep(i,N){
        int l = pi[c[i]];
        if( l != pi[c[i]] ) ps[l].emplace_back(i);
        pi[c[i]] = i;
    }
    // shortest sections include the same color
    return;
}

void scan2D( vector<int> &ans, vector<vector<int>> &ps, vector<vector<P>> &qs, int N, int Q ){
    // treat duplicate section as 2D point (li.ri)
    BIT<int> d(N); //#duplicate
    for( int x=N-1; x>=0; --x ){
        for( int y : ps[x] ){
            d.add(y,1);
            for( P query : qs[x] ){
                int r = query.first;
                int i = query.second;
                ans[i] = ( r - x + 1 ) - d.sum(r);
            }
        }
    }
    return;
}

int main(){ 
    //input
    int N, Q;
    cin >> N >> Q;
    vector<int> c(N);
    rep(i,N) cin >> c[i];
    vector<vector<P>> qs(Q);
    rep(qi,Q){ // #query
        int l,r;
        cin >> l >> r;
        --l;--r; // start index from 0
        qs[l].emplace_back(r,qi);
        
    }
    vector<vector<int>> ps(N);
    duplicated_sections( ps, N, c );
    vector<int> ans(Q);
    scan2D( ans, ps, qs, N, Q );
    rep(i,Q) cout << ans[i] << endl;
    return 0;
}
