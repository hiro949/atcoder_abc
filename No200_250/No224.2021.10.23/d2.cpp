#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

vector<vector<int>> G(9,vector<int>());
vector<int> node(9,-1);
vector<vector<bool>> trace(9,vector<bool>(8,false));
int bit = 0;

ll dfs( int s ){
    if(bit==(1<<8)-1) return 0;    
    ll ans = inf;
    for( int v : G[s] ){
        cout << v << " " << int(bit&(1<<v)) << trace[s][node[v]] << endl;
        if(!trace[s][node[v]] and bit&(1<<v) ==0 ){
            trace[s][node[v]] = true;
            node[s] = node[v]; node[v] = -1 ;
            if(node[s]==s) bit |= (1<<s);
            cout << bitset<8>(bit) << endl;
            ans = min( ans, dfs(v)+1);
            if(node[s]==s) bit &= ~(1<<s);
            cout << bitset<8>(bit) << endl;
            node[v] = node[s]; node[s] = -1 ;
            trace[s][node[v]] = false;
        }
    }
    return ans;
}

int main(){
    int m;
    cin >> m;
    int u,v;
    rep(i,m){
        cin >> u >> v; --u; --v;
        G[u].push_back(v); G[v].push_back(u); 
    }
    rep(i,8){
        int nd;
        cin >> nd; --nd;
        node[nd] = i;
        trace[nd][i]=true;
    }
    ll ans = inf;
    int s0;
    rep(i,9){
        if(node[i]==-1) s0=i;
        else if(node[i]==i){
            bit |= (1<<i);
        }
    }
    
    ans = min(ans,dfs(s0));
    if(ans==inf) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}