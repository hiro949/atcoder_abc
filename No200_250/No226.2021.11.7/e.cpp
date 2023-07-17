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

// node-edge must be 1-1 correlation (n=m)
// tree => m=n-1 => this graph should be tree + 1 edge
// => it has 1 cycle
// #partern = 2^k ( k:# of connected graph )


int main(){
    int n,m,u,v;
    cin >> n >> m;
    vector<P> edge;
    // acl union-find struct
    dsu t(n);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        --a; --b;
        edge.emplace_back(a,b);
        t.merge(a,b);
    }
    vector<int> nV(n),nE(n);
    for( auto [a,b] : edge ) ++nE[t.leader(a)];
    rep(i,n) ++nV[t.leader(i)];
    mint ans = 1;
    rep(i,n){
        if(nV[i]==0) continue; // i is leader
        if(nV[i]!=nE[i]) ans *= 0;
        ans *= 2;
    }
    cout << ans.val() << endl;
    return 0; 
}
