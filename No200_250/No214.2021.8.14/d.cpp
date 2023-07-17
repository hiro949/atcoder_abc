#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

struct UnionFind {
  vector<int> d;
  UnionFind(int n=0): d(n,-1) {}
  int find(int x) {
    if (d[x] < 0) return x;
    return d[x] = find(d[x]);
  }
  bool unite(int x, int y) {
    x = find(x); y = find(y);
    if (x == y) return false;
    if (d[x] > d[y]) swap(x,y);
    d[x] += d[y];
    d[y] = x;
    return true;
  }
  bool same(int x, int y) { return find(x) == find(y);}
  int size(int x) { return -d[find(x)];}
};

struct edge{
    int v1,v2,w;
};

int main(){
    int n;
    cin >> n;
    vector<edge> tree;
    rep(i,n-1){
        int u,v,w;
        cin >> u >> v >> w;
        --u; --v;
        tree.push_back({u,v,w});
    }
    sort(tree.begin(),tree.end(),[]( edge e1, edge e2 ){ return e1.w<e2.w; });
    UnionFind d(n);
    ll ans = 0;
    for( auto e : tree ){
        ans += (ll)(e.w)*d.size(e.v1)*d.size(e.v2);
        d.unite(e.v1,e.v2);
    }
    cout << ans << endl;
    return 0;
}
