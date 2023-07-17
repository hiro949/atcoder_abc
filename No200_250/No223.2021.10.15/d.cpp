#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> to(n);
    vector<int> deg(n,0); // income degree
    rep(i,m){
        int a,b;
        cin >> a >> b; --a; --b;
        to[a].push_back(b);
        ++deg[b];  
    }
    priority_queue<int,vector<int>,greater<int>> q;
    rep(i,n) if(deg[i]==0) q.push(i); // start of each DAG
    vector<int> ans;
    while(!q.empty()){
        int v=q.top(); q.pop();
        ans.push_back(v);
        for( int u : to[v] ){
            --deg[u];
            if(deg[u]==0) q.push(u);
        }
    }
    if(ans.size()!=n) cout << -1 << endl;
    else for( int v : ans ) cout << v+1 << endl;
    return 0;
}
