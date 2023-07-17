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
    vector<P> edge(m);
    rep(i,m){
        cin >> edge[i].first >> edge[i].second;
        --edge[i].first; --edge[i].second;
    }
    sort(edge.rbegin(),edge.rend());
    dsu uf(n);
    vector<int> ans(n);
    edge.emplace_back(-1,-1); //sentinel
    int i=0,np=n-1,x=0;
    for( int v=n-1; v>=0; --v ){
        ++x;
        while(edge[i].first==v and edge[i].first>=0 ){
            if(!uf.same(edge[i].first,edge[i].second)){
                uf.merge(edge[i].first,edge[i].second);
                --x;
            }
            ++i;
        }
        ans[v] = x;
        np = edge[i].first;
    }
    ans.push_back(0);
    rep(i,n) cout << ans[i+1] << endl;
    return 0;
}