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

int n,k;
int nmax=2e5;
vector<vector<int>> ab(nmax,vector<int>(2));

int main(){
    cin >> n >> k;
    rep(i,n) cin >> ab[i][0];
    rep(i,n) cin >> ab[i][1];
    vector<vector<bool>> dp(n,vector<bool>(2,false));
    rep(j,2) dp[0][j] = true;
    for( int i=1; i<n; ++i ){
        rep(j2,2){
            bool tf = false;
            rep(j1,2){
                if(abs(ab[i-1][j1]-ab[i][j2])<=k){
                     tf |= dp[i-1][j1];
                }
            }
            dp[i][j2] = tf;
        }
    }
    if(dp[n-1][0] or dp[n-1][1]) cout << "Yes" <<endl;
    else cout << "No" <<endl;
    return 0;
}