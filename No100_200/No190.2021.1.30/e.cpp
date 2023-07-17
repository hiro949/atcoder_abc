#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int INF = 1e9;
//BFS => wighted graph between c[i]
//=> traveling salesman problem

int main(int argc, char const *argv[])
{
    int n,m,k;
    cin >> n >> m;
    vector<vector<int>> to(n);
    rep(i,m){
      int a,b;
      cin >> a >> b;
      --a;--b;
      to[a].push_back(b);to[b].push_back(a);
    }
    cin >> k;
    vector<int> c(k);
    rep(i,k){
      cin >> c[i];
      --c[i];
    }
    vector<vector<int>> dp((1<<k),vector<int>(k,INF)), G(k,vector<int>(k));
    auto bfs = [&](int sv){
      vector<int> dist(n,INF);
      queue<int> q;
      dist[sv] = 0; q.push(sv);
      while(!q.empty()){
        int v = q.front();q.pop();
        for(int u : to[v]){
          if( dist[u] != INF ) continue;
          dist[u] = dist[v]+1;
          q.push(u);
        }
      }
      return dist;
    };
    rep(i,k){
      vector<int> d = bfs(c[i]);
      rep(j,k) G[i][j] = d[c[j]];
    }
    rep(i,k) dp[1<<i][i] = 1; //at start
    rep(bit,1<<k)rep(i,k){
      // present point is not in bit => wrong
      if(~bit>>i&1) continue; // ith dig in bit != 1
      rep(j,k){ // next point
        if(bit>>j&1) continue;
        dp[bit|1<<j][j] = min(dp[bit|1<<j][j], dp[bit][i] + G[i][j]);
      }
    }
    int ans = INF;
    rep(i,k) ans = min(ans,dp[(1<<k)-1][i]);
    if(ans==INF) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}
