#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
const int max_T = 1e5;
//conmect shortest

int main(){
    int n,tsum=0;
    cin >> n;
    vector<int> t(n);
    rep(i,n){
        cin >> t[i];
        tsum += t[i];
    }
    vector<vector<bool>> dp(101,vector<bool>(max_T+1,false));
    dp[0][0] = true;
    rep(i,n){
        dp[i+1] = dp[i];
        rep(j,max_T){
            if(dp[i][j] and j+t[i]<=max_T) dp[i+1][j+t[i]] = dp[i+1][j];
        }
    }
    int ans = inf;
    rep(j,max_T+1){
        if(dp[n][j]) ans = min(ans,max(j,tsum-j));
    }
    cout << ans << endl;
    return 0;
}
