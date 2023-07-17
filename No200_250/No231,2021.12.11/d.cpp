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
    dsu d(n);
    int a,b;
    vector<vector<int>> G(n,vector<int>());
    rep(i,m){
        cin >> a >> b; --a; --b;
        d.merge(a,b);
        G[a].push_back(b); G[b].push_back(a);
    }
    int cnt_edge;
    for( auto g : d.groups() ){
        cnt_edge = 0;
        if(g.size()>1){
            for( int x : g ){
                if( G[x].size()==1 ) ++cnt_edge;
                else if( G[x].size()==2 ) continue;
                else{
                    cout << "No" << endl;
                    return 0;
                }
            }
            if(cnt_edge!=2){
                cout << "No" << endl;
                return 0;    
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}