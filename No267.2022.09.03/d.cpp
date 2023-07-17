#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const ll inf = numeric_limits<ll>::max()/2;

int main(){
    int n,m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    vector<vector<ll>> dp(n+1,vector<ll>(m+1,-inf));
    rep(i,n+1) dp[i][0]=0;
    for( int i=1; i<=n; ++i ){
        for( int j=1; j<=min(i,m); ++j ){
            dp[i][j] = dp[i-1][j];
            ll x = dp[i-1][j-1] + j*a[i-1];
            dp[i][j] = max(dp[i][j],x);
        }
    }
    ll ans = -inf;
    for( int i=1; i<=n; ++i ) ans = max(ans,dp[i][m]);
    cout << ans << endl;
    return 0;
}