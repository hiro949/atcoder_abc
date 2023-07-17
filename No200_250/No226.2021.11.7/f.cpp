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
// p in Perm => p**S(p) = I
// S(p) = LCM(cycle size)
// partern of Perm => division number of n
// dp[n][lcm]

struct combination {
  vector<mint> fact, ifact;
  combination(int n):fact(n+1),ifact(n+1) {
    fact[0] = 1;
    for (int i = 1; i <= n; ++i) fact[i] = fact[i-1]*i;
    ifact[n] = fact[n].inv();
    for (int i = n; i >= 1; --i) ifact[i-1] = ifact[i]*i;
  }
  mint operator()(int n, int k) {
    if (k < 0 || k > n) return 0;
    return fact[n]*ifact[k]*ifact[n-k];
  }
}c(55);

int main(){
    int n,k;
    cin >> n >> k;
    // if remember all LCM memory can overflow
    vector<map<int,mint>> dp(n+1);
    dp[0][1]=1;
    rep(i,n){
        for( auto [l,x] : dp[i] )for( int j=1; i+j<=n; ++j ){
            dp[i+j][lcm(l,j)] += x*c(n-i-1,j-1)*c.fact[j-1];
        }
    }
    mint ans;
    for( auto [l,x] : dp[n] ) ans += mint(l).pow(k)*x;
    cout << ans.val() << endl; 
    return 0;
}
