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

ll dfs( int dancer ){
    if(dancer==0) return 0;
    ll ans = 0;
    rep(j,2*n)rep(i,j)if(flag[i] and flag[j]){
        flag[i]=false; flag[j]=false;
        ll x = a[i][j]^dfs(dancer-2);
        ans = max(ans,x);
        flag[i]=true; flag[j]=true;
    }
    return ans;
}

int main(){
    cin >> n;
    rep(j,2*n)rep(i,j) cin >> a[i][j];
    cout << dfs(2*n) << endl;
    return 0;
}