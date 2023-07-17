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
const int nmax=1e5;
int n,q;
vector<int> x(nmax);
vector<vector<int>> G(nmax);
    
void __init__( int v, int k ){

}

int main(){
    cin>> n >> q;
    rep(i,n) cin>>x[i];
    int a,b;
    rep(i,n-1){
        cin >> a >> b; --a;--b;
        G[a].push_back(b);G[b].push_back(a);
    }
    rep(i,n-1){
        sort(G[i].begin(),G[i].end());
    }
    int v,k;
    rep(iq,q){
        cin >> v >> k;
        __init__(v,k);
    }
    return 0;
    }