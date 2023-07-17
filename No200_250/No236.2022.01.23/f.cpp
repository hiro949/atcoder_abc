#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<ll>::max();

int main(){
    int n;
    cin >> n;
    vector<ll> c(n);
    ll csum = 0;
    rep(i,n) cin >> c[i], csum+=c[i];
    vector<vector<int>> dp(n+1,vector<int>((1<<n),csum));
    // possible to cook all curry <j with spices 1...i
    dp[0][0]=0;
    rep(i,n)rep2(w,1,(1<<n)){
        dp[i][w] = min(dp[i][w],dp[i-1][]+c[i]);
    }

    return 0;
}