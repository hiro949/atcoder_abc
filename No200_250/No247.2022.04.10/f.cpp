#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint998244353;
const int inf = numeric_limits<int>::max()/2;

int main(){
    int n;
    cin >> n;
    vector<int> p(n),q(n);
    rep(i,n) cin >> p[i],--p[i];
    rep(i,n) cin >> q[i],--q[i];
    dsu G(n);
    rep(i,n) G.merge(p[i],q[i]);
    
    return 0;
}