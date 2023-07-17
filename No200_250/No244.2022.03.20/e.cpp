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
    vector<vector<mint>> cnt(n,vector<mint>(2,0));
    cnt[s][0]=1;
    rep(i,k){
        vector<vector<mint>> cnt2(n,vector<mint>(2,0));
        swap(cnt,cnt2);
        rep(v,n)for( int u :G[v] ){
            if(u==x){
                cnt[u][0] += cnt2[v][1];
                cnt[u][1] += cnt2[v][0];
            }else{
                cnt[u][0] += cnt2[v][0];
                cnt[u][1] += cnt2[v][1];    
            }
        }
    }
    cout << cnt[t][0].val() << endl;
    return 0;
}