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
    int n,m;
    cin >> n >> m;
    vector<vector<bool>> g(n,vector<bool>(n,false));
    int u,v;
    rep(i,m){
        cin >> u >> v;
        --u;--v;
        g[u][v]=true;
        g[v][u]=true;
    }
    int ans = 0;
    rep(a,n)rep(b,a)rep(c,b){
        if( g[a][b] and g[b][c] and g[c][a] ) ++ans;
    }
    cout << ans << endl;
    return 0;
}
