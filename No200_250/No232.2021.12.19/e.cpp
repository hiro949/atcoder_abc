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
    int h,w,k;
    cin >> h >> w >> k;
    int sx,sy,tx,ty;
    cin >>sx >> sy >> tx >> ty;
    vector<vector<mint>> dp(2,vector<mint>(2));
    dp[sx==tx][sy==ty] = 1;
    rep(ik,k){
        vector<vector<mint>> p(2,vector<mint>(2));
        swap(dp,p);
        rep(y,2){
            dp[0][y] += p[0][y]*(h-2);
            dp[1][y] += p[0][y];
            dp[0][y] += p[1][y]*(h-1);
        }
        rep(x,2){
            dp[x][0] += p[x][0]*(w-2);
            dp[x][1] += p[x][0];
            dp[x][0] += p[x][1]*(w-1);
        }
    }
    cout << dp[1][1].val() << endl;
    return 0;
}