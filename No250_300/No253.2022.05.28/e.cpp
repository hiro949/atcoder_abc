#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint998244353;
const int inf = numeric_limits<int>::max()/2;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<mint> dp(m,1);
    rep(i,n-1){
        vector<mint> sum(m+1,0);
        rep(i,m) sum[i+1] = sum[i] + dp[i];
        rep(i,m) dp[i] = sum[max(0,i+1-k)];
        rep(i,m){
            dp[i] += sum[n];
            dp[i] -= sum[min(n,i+1+k)];
        }
    }
    mint ans = 0;
    rep(i,m) ans += dp[i];
    cout << ans.val() << endl;
    return 0;
}