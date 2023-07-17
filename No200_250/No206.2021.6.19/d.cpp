#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
// a[i]!=a[j] => edge => graph
// connected component => size-1 operation

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

int main(){
    int n;
    cin >> n;
    UnionFind uf(2e5+1);
    vector<int> a(n);
    set<int> s;
    rep(i,n) cin >> a[i];
    rep(i,n/2){
        if(a[i]!=a[n-1-i]) uf.unite(a[i],a[n-1-i]);
    }
    rep(i,n/2){
        if(uf.size(a[i]>1)){
            s.insert(uf.find(a[i]));
            s.insert(uf.find(a[n-1-i]));
        }
    }
    int ans = 0;
    for( int v : s ){
        ans += uf.size(v)-1;
    }
    cout << ans << endl;
    return 0;
}
