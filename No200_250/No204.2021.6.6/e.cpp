#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

struct rout{
    int g,c,d;
};

int main(){
    int n,m;
    vector<vector<rout>> g(n,vector<rout>());
    rep(i,m){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        --a;--b;
        rout r1,r2;
        r1.g=b, r1.c=c, r1.d=d;
        r2.g=a, r2.c=c, r2.d=d;
        g[a].push_back(r1);
        g[b].push_back(r2);
    }
    auto comp = []( P l, P r ){ return l.second>r.second; };
    priority_queue< P, vector<P>, decltype(comp) > q(comp);
    vector<int> time(n,inf);
    time[0] = 0;
    q.push({0,0});
    while(!q.empty()){
        P p=q.top(); q.pop();
        for( auto v : g[p.first]){
            
        }

    }
}