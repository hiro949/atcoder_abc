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
int n,s;

string ans;

string BackTrack( int i, int x, int d, vector<int> &a, vector<int> &b, vector<vector<bool>> &dp ){
    if(i==0){
        if(x==0) return ans;
        return 
    }
    int xa = x-a[i-1], xb = x-b[i-1];
    if(xa>0 and dp[i-1][xa]) return "T" + BackTrack(i-1,xa,a,b,dp);
    else if(xb>0 and dp[i-1][xb]) return "L" + BackTrack(i-1,xb,a,b,dp);
}

int main(){
    cin >> n >> s;
    vector<int> a(n),b(n);
    rep(i,n) cin >> a[i] >> b[i];
    vector<vector<bool>> dp(n+1,vector<bool>(s+1,false));
    dp[0][0] = true;
    rep(i,n){
        for(int x=0; x<s; ++x){
            if(x+a[i]<=s) dp[i+1][x+a[i]] = dp[i+1][x+a[i]] || dp[i][x];
            if(x+b[i]<=s) dp[i+1][x+b[i]] = dp[i+1][x+b[i]] || dp[i][x];
        }
    }
    if(!dp[n][s]){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    BackTrack(n,s,a,b,dp);
    return 0;
}