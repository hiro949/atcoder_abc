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

void __init__(int u, int k, int n, vector<vector<int>> G){
    
    return;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> G(n,vector<int>());
    int a,b;
    rep(i,n-1){
        cin >> a >> b;
        --a;--b;
        G[a].push_back(b);G[b].push_back(a);
    }
    int q,u,k;
    cin >> q;
    rep(iq,q){
        cin >> u >> k;
        --u;
        __init__(u,k,n,G);
    }
    return 0;
}