#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
        a[i]%=200;
    }
    vector<vector<int>> dp(n,vector<int>(200,0));
    dp[0][a[0]] = 1;
    for( int i=1; i<n; ++i ){
        dp[i][a[i]] += 1;
        rep(r,200){
            int r2 = (r + a[i])%200;
            dp[i][r2] += dp[i-1][r2] + dp[i-1][r];
        }
    }
    bool yn = false;
    int rem = 0;
    rep(r,200){
        if(dp[n-1][r]>1){
            yn = true; rem = r;
            break;
        }
    }
    if(!yn){
        cout << "No" << endl;
        return 0;
    }
    
    return 0;
}
