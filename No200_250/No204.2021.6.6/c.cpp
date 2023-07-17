#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n,vector<int>());
    rep(i,m){
      int a,b;
         cin >> a >> b;
         g[--a].push_back(--b);
    }
    ll ans = 0;
    rep(start,n){
      queue<int> q; q.push(start);
      vector<bool> flag(n,false);
      while(!q.empty()){
        int pos = q.front(); q.pop();
        flag[pos] = true;
        for( int v : g[pos] ){
          if(!flag[v]) q.push(v);
        }
      }
      for( bool tf : flag ) ans += tf;
    }
    cout << ans << endl;
    return 0;
}
