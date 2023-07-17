#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const ll inf = numeric_limits<ll>::max() - 1e6;
int n,m;
vector<vector<P>> G(400,vector<P>());

struct edge{
    int v,cost,id;
};

void dijkstra( int s, vector<vector<ll>> &cost){
    priority_queue< edge, vector<edge>, function<bool(edge,edge)>>q(
        [](edge a,edge b){return a.cost>b.cost;}
    );
    rep(i,n) cost[s][i] = 0;
    q.emplace(s,cost[s],0);
    while(!q.empty()){
        edge p=q.top(); q.pop();
        if( cost[p.v][p.id] < p.cost ) continue;
        for( P e : G[p.v] ){
            int id = max(p.id,e.first);
            if(cost[e.first][id]> cost[p.v][id] + e.second ){
                cost[e.first] = cost[p.v][id] + e.second;
                q.emplace(e.first,cost[e.first],id);
            }
        }
    }
    return;
}

int main(){
    cin >> n >> m;
    rep(i,m){
        int a,b,c;
        cin >> a >> b >> c;
        --a,--b;
        G[a].push_back(make_pair(b,c));
    }
    ll ans = 0;
    vector<vector<ll>> cost(n);
    rep(s,n)rep(k,n){
        rep(i,n) cost[i] = inf;
        dijkstra(s,k,cost);
        for( int i=0; i<n; ++i ){
            if( cost[i]!=inf )ans += cost[i];
        }
    }
    cout << ans << endl;
    return 0;
}
