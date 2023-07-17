#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using mint = modint998244353;
using P = pair<int,int>;
using PP = pair<pair<int,int>,int>;
const int inf = numeric_limits<int>::max()/2;

int main(){
    int n,m,k,s,t,x;
    cin >> n >> m >> k >> s >> t >> x; --s,--t,--x;
    vector<vector<int>> G(n,vector<int>());
    int a,b;
    rep(i,m){
        cin >> a >> b; --a;--b;
        G[a].push_back(b);G[b].push_back(a);
    }
    vector<vector<vector<mint>>> cnt(n,vector<vector<mint>>(k+1,vector<mint>(2,0)));
    cnt[s][0][0]=1;
    priority_queue<PP,vector<PP>,greater<PP>> q;
    q.emplace(make_pair(0,0),s);
    while(!q.empty()){
        PP p=q.top(); q.pop();
        int i=p.first.first,oe=p.first.second,v=p.second;
        //cout << i << " " << oe << " " << v<< endl;
        if(i>=k) continue;
        for( int u : G[v] ){
            int oe2=oe;
            if(u==x) (oe2+=1)%=2;
            cnt[u][i+1][oe2] += cnt[v][i][oe];
            if(i<k) q.emplace(make_pair(i+1,oe2),u);
        }
    }
    cout << cnt[t][k][0].val() << endl;
    return 0;
}