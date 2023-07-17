#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

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

void renue( vector<int> &a, vector<int> &b, vector<ll> &c, int n, int t, int e, int x ){
    int vban = t==1? b[e] : a[e];
    int vstart = t==1? a[e] : b[e];
    UnionFind uf(n);
    rep(i,n-1){
        if( a[i]!=vban and b[i] != vban ){
            uf.unite(a[i],b[i]); // a & b has connection
        }
    }
    rep(i,n){
        if( uf.same(vstart,i) ) c[i] += x;
    }
    return;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n-1),b(n-1);
    rep(i,n-1){ 
        cin >> a[i] >> b[i];
        --a[i];--b[i];
    }
    int q;
    cin >> q;
    vector<ll> c(n);
    rep(i,q){
        int t,e,x;
        cin >> t >> e >> x;
        --e;
        renue( a,b,c,n,t,e,x );
    }
    rep(i,n) cout << c[i] << endl;
    return 0;
}