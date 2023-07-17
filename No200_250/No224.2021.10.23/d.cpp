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
// state transition graph => BFS

int main(){
    int n=9, m;
    cin >> m;
    vector<vector<int>> to(n);
    rep(i,m){
        int a,b;
        cin >> a >> b; --a; --b;
        to[a].push_back(b); to[b].push_back(a);
    }
    vector<int> s(n,-1);
    rep(i,n-1){
        int p;
        cin >> p; --p;
        s[p] = i;
    }
    vector<int> t(n,-1);
    rep(i,n-1) t[i] = i;
    map<vector<int>,int> dist;
    queue<vector<int>> q;
    dist[s]=0; q.push(s);
    while(!q.empty()){
        s = q.front(); q.pop();
        int d = dist[s];
        rep(v,n) if(s[v]==-1) for( int u : to[v] ){
            swap(s[u],s[v]);
            if(dist.find(s)==dist.end()){
                dist[s] = d+1;
                q.push(s);
            }
            swap(s[u],s[v]);
        }
    }
    if( dist.find(t) == dist.end() ) cout << -1 << endl;
    else cout << dist[t] << endl;
    return 0;
}
