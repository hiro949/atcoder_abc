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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    // i個選んでqで割った余りがr
    vector<vector<vector<mint>>> dp(n+1,vector<vector<mint>>(n+1,vector<mint>(n,0)));
    dp[0][0][0] = 1;
    rep(i,n){
         vector<vector<vector<mint>>> dp2 = dp;
        rep2(k,1,i)rep2(q,1,n+1)rep(r,n){
            int r2 = (a[i] + r)%q;
            dp[k+1][q+1][r2] += dp2[k][q][r];
        }
    }
    mint ans = 0;
    rep2(q,1,n+1) ans += dp[q][q][0];
    cout << ans.val() << endl;
    return 0;
}
