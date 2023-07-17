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


int main(){
    int n,m;
    cin >> n >> m;
    int v1,v2;
    vector<vector<int>> G(n,vector<int>());
    rep(i,m){
        cin >> v1 >> v2;
        G[v1].push_back(v2);G[v2].push_back(v1);
    }
    


    return 0;
}