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
    int n,m,k;
    cin >> n >> m >> k;
    int u,v;
    vector<vector<int>> g(n,vector<int>());
    rep(i,m){
        cin >> u >> v; --u;--v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    return 0;
}
