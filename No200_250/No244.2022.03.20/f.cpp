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

vector<vector<int>> G(17,vector<int>());

int path( int bit ){
    
}

int main(){
    int n,m;
    cin >> n >> m;
    int a,b;
    rep(i,m){
        cin >> a >> b; --a; --b;
        G[a].push_back(b);G[b].push_back(a);
    }
    int ans=0;
    for( int bit=0; bit<(1<<n); ++bit ){
        ans += path(bit);
    }
    cout << ans << endl;
    return 0;
}