#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;

struct edge{ll to, cost;};
typedef pair<ll,ll> P;
struct graph{
  ll V;
  vector<vector<edge> > G;
  vector<ll> d;

  graph(ll n){
    init(n);
  }

  void init(ll n){
    V = n;
    G.resize(V);
    d.resize(V);
    rep(i,V){
      d[i] = INT_MAX;
    }
  }

  void add_edge(ll s, ll t, ll cost){
    edge e;
    e.to = t, e.cost = cost;
    G[s].push_back(e);
  }

  void dijkstra(ll s){
    rep(i,V){
      d[i] = INT_MAX;
    }
    d[s] = 0;
    priority_queue<P,vector<P>, greater<P> > que;
    que.push(P(0,s));
    while(!que.empty()){
      P p = que.top(); que.pop();
      ll v = p.second;
      if(d[v]<p.first) continue;
      for(auto e : G[v]){
        if(d[e.to]>d[v]+e.cost){
          d[e.to] = d[v]+e.cost;
          que.push(P(d[e.to],e.to));
        }
      }
    }
  }
};
    

int main(){
    int n;
    cin >> n;
    vector<int> x45(n),y45(n),w(n);
    rep(i,n){
        int x,y;
        cin >> x >> y >> w[i];
        x45[i] = x+y; y45[i] = x-y;
    }
    int max_cost = 0;
    int s = 0;
        rep(l,n){
            int cost = max(abs(x45[s]-x45[l]),abs(y45[s]-y45[l]));
            graph g(n);
            rep(i,n){
                for(int j=i+1; j<n; ++j ){
                    if( i != s and i!=l and j!= s and j!=l ){
                        int dij = max(abs(x45[i]-x45[j]),abs(y45[i]-y45[j]));
                        g.add_edge(i,j, dij + max(0,w[j]-w[i]) );
                        g.add_edge(j,i, dij + max(0,w[i]-w[j]) );
                    }
                }
            }
            g.dijkstra(0);
            cost += g.d[l];
            max_cost = max( cost, max_cost );
        }
    cout << max_cost << endl;
    return 0;
}