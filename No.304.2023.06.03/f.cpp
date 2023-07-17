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
    string s;
    cin >> s;
    vector<vector<vector<mint>>> dp(n+1,vector<vector<mint>>(n+1,vector<mint>(2,0)));
    for( int m=1; m*m<n and n%m==0; ++m ){
        dp[m][0][0] = 1; dp[m][0][1] = 1;
        for( int i=1; i<=m; ++i ){
            dp[m][i][0] = dp[m][i-1][0] + dp[m][i-1][1];
            if(s[i]=='#')dp[m][i][1] = dp[m][i][0];
        }
        int m2 = n/m;
        if(m2==n) continue;
    }
    return 0;
}