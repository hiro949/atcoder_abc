#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
int nmax = 200000;
vector<vector<int>> G(nmax);

void dfs( int c, int p ){
    cout << c+1 << " ";
    for( int to : G[c] )if( to!=p ){
        dfs(to,c);
        cout << c+1 << " ";
    }
    return;
}

int main(){
    int n;
    cin >> n;
    rep(i,n-1){
        int a,b;
        cin >> a >> b;
        G[a-1].push_back(b-1); G[b-1].push_back(a-1);
    }
    //sort so that smaller id node chosen preferetially
    rep(i,n) sort(G[i].begin(),G[i].end());
    dfs(0,-1);
    return 0;
}