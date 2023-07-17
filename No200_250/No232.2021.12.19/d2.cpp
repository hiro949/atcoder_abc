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

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    vector<vector<int>> dp(h,vector<int>(w,0));
    for( int i=h-1; i>=0; --i ){
        for( int j=w-1; j>=0; --j ){
            if(s[i][j]=='#') continue;
            dp[i][j]=1;
            if(i+1<h) dp[i][j]=max(dp[i][j],dp[i+1][j]+1);
            if(j+1<h) dp[i][j]=max(dp[i][j],dp[i][j+1]+1);
        }
    }
    cout << dp[0][0] << endl;
    return 0;
}