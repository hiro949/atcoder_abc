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

int n,nmax = 8;
vector<vector<ll>> a(2*nmax,vector<ll>(2*nmax));
vector<bool> flag(2*nmax,true);
vector<ll> fun;
 
void dfs( ll score, int piv, int dancer ){
    if(piv==2*n and dancer>0) return;
    if(dancer==0){
        fun.push_back(score);
        return;
    }
    rep(j,2*n)rep2(i,piv,j)if(flag[i] and flag[j]){
        flag[i]=false; flag[j]=false;
        dfs(a[i][j]^score, i+1, dancer-2);
        flag[i]=true; flag[j]=true;
    }
    return;
}

int main(){
    cin >> n;
    rep(i,2*n-1)rep2(j,i+1,2*n) cin >> a[i][j];
    dfs(0,0,2*n);
    ll ans = 0;
    for( ll x : fun ) ans = max(ans,x);
    cout << ans << endl;
    return 0;
}