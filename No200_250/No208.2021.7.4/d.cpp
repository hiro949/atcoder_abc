#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
int n,m;
vector<vector<P>> G(400,vector<P>());

int main(){
    cin >> n >> m;
    rep(i,m){
        int a,b,c;
        cin >> a >> b >> c;
        --a,--b;
        G[a].push_back(make_pair(b,c));
    }
    ll ans = 0;
    //warshall-floyd
    vector<vector<int>> dp(n,vector<int>(n,inf));
    rep(i,n) dp[i][i] = 0;
    rep(k,n)rep(i,n)rep(j,n){
        dp[i][j] = min(dp[i][j], dp[i][k]+dp[k][j]);
        ans += dp[i][j];
    }
    cout << ans << endl;
    return 0;
}

