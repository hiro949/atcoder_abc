#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int n,q;
    cin >> n;
    vector<vector<int>> graph(n,vector<int>(0)), anc(n,vector<int>(0));
    rep(i,n){
        int par;
        cin >> par; --par;
        graph[i].push_back(i);
        if(i>0) graph[par].push_back(i);
    }
    queue<int> que; que.push(0);
    while(!que.empty()){
        int pos = que.front(); que.pop();
        for( int i : graph[pos] ){
            anc[i] = anc[pos];
            anc[i].push_back(i);
            que.push(i);
        }
    }
    int ans = 0;
    rep(i,q){
        int u,d;
        cin >> u >> d;

    }
}