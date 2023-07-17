#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint998244353;
const int inf = numeric_limits<int>::max()/2;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<vector<mint>> dp(n,vector<mint>(10,0));
    dp[0][a[0]]=1;
    int s,t;
    for( int i=1; i<n; ++i ){
        rep(j,10){
            s = (a[i]+j)%10, t = (a[i]*j)%10;
            dp[i][s] += dp[i-1][j];
            dp[i][t] += dp[i-1][j];
        }
    }
    rep(k,10) cout << dp[n-1][k].val() << endl;
    return 0;
}