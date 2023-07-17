#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<ll,int>;
using mint = modint1000000007;
const ll inf = numeric_limits<ll>::max()/2;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i,n) cin >>a[i];
    vector<vector<int>> G(n,vector<int>());
    int u,v;
    rep(i,m){
        cin >> u >> v; --u;--v;
        G[u].push_back(v); G[v].push_back(u);
    }
    // delete from node with lowest cost
    priority_queue<P,vector<P>,greater<P>> q;
    rep(i,n){
        ll c = 0;
        for( int v : G[i] ) c += a[v];
        q.emplace(c,i);
    }
    ll ans = 0;
    while(!q.empty()){
        P p = q.top(); q.pop();
        ans = max(ans,p.first);
        priority_queue<P,vector<P>,greater<P>> q2;
        while(!q.empty()){
            P p2 = q.top(); q.pop();
            for( int v : G[p2.second])if(v==p.second){
                p2.first -= a[v];
                break;
            }
            q2.push(p2);
        }
        swap(q,q2);
    }
    cout << ans << endl;
    return 0;
}