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

int h,w,k;
int x[2],y[2];

int main(){
    cin >> h >> w >> k;
    cin >>x[0] >> y[0] >> x[1] >> y[1];
    vector<mint> dp(4,0);
    if(x[0]==x[1] and y[0]==y[1]) dp[0]=1;
    else if(x[0]==x[1]) dp[1]=1;
    else if(y[0]==y[1]) dp[2]=1;
    else dp[3]=1;
    for( int i=1; i<k; ++i ){
        dp[0] = dp[1] + dp[2];
        dp[1] = (h-1)*dp[0] + (h-2)*dp[1] + dp[3];
        dp[2] = (w-1)*dp[0] + (w-2)*dp[2] + dp[3];
        dp[3] = (h-1)*dp[1] + (w-1)*dp[2] + (h-2 + w-2)*dp[3];
    }
    cout << dp[0].val() << endl;
    return 0;
}