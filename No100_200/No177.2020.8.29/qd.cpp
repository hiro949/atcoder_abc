#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

// # of largest connected graph

void dfs(int N, vector<int> &comp, vector<vector<int>> &G) {
    int BLACK = 1, WHITE = 0; 
    int i, j, vertex, neighbor;
    vecotr<int> color(N,WHITE);
    stack<int> S;
  
    for (i = 0; i < N; i++) {
        if (color[i] == WHITE) {
            // dfs
            S.push(i);
            while (!S.empty()) {
                vertex = S.top();
                S.pop();        
                color[vertex] = BLACK;  // 訪問済みにする
                comp[vertex] = i;  // 連結成分の番号を振る          
                for (j = 0; j < (int) G[vertex].size(); j++) {
                    neighbor = G[vertex][j]; // 隣接している頂点：友人
                    if (color[neighbor] == WHITE) S.push(neighbor);
                }
            }
        }
    }
    return;
}

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> G(N,vector<int>(0));
    int A,B;
    rep(i,M){
        cin >> A >> B;
        G[A-1].push_back(B-1);
        G[B-1].push_back(A-1);
    }
    vector<int> comp(N);
    dfs( N, comp, G);
    int ans = 0;
    rep(i,N){
        int Ncg = count(comp.begin(),comp.end(),comp[i]);
        ans = max( ans, Ncg );
    }
    cout << ans << endl;
    return 0;
}