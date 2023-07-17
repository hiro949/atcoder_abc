#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max();

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> G(n,vector<int>());
    rep(i,m){
        int a,b;
        cin >> a >> b;
        --a;--b;
        G[a].push_back(b); G[b].push_back(a);
    }
    vector<int> flag(n,inf);
    vector<mint> way(n,0);
    queue<int> q;
    q.push(0); way[0]=1;
    while(!q.empty()){
        int now = q.front(); q.pop();
        int cost = flag[now]+1;
        for( int v : G[now] ){
            if(flag[v]>cost){
                q.push(v); flag[v] = cost; way[v] = way[now];
            }
            else if( flag[v]==cost ) way[v] += way[now];
        }
    }
    cout << way[n-1].val() << endl;
    return 0;
}