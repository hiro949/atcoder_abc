#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int main(){
    int n,amax,amin;
    cin >> n >> amax >> amin;
    vector<int> id_out;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
        if(a[i]<amin or a[i]>amax) id_out.push_back(i);
    }
    vector<int> judge(4,0); //max, min, out_max, out_min
    int l=0,r=0;
    ll cnt = 0;
    while(l<n){
        if(judge[2]==0 and judge[3]==0 and r<n){
            ++r;
            if(a[r-1]==amax) ++judge[0];
            else if(a[r-1]>amax) ++judge[2];
            if(a[r-1]==amin) ++judge[1];
            else if(a[r-1]<amin) ++judge[3];
        }else{
            if(a[l]==amax) --judge[0];
            else if(a[l]>amax) --judge[2];
            if(a[l]==amin) --judge[1];
            else if(a[l]<amin) --judge[3];
            ++l;
        }
        bool OK = judge[0]>0 and judge[1]>0 and judge[2]==0 and judge[3]==0 and l<n;
        if( OK ) ++cnt;
        cout << l << " " << r << " " << OK << endl;
    }
    cout << cnt << endl;
    return 0;
}