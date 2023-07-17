#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;


// use 0-1 BFS (broadth first search)

void walk( int i, int j, int d, int H, int W, vector<string> &S, deque<P> &q, vector<vector<int>> &dist ){
    int di[] = {-1,0,1,0};
    int dj[] = {0,-1,0,1};
    rep(v,4){
        int ni = i+di[v], nj = j+dj[v]; // site after move
        if( ni<0 or nj <0 or ni>=H or nj>=W ) continue; // out of board
        if( S[ni][nj] == '#' ) continue; // obsacle exists
        if( dist[ni][nj] <= d ) continue; // reach within less steps;
        dist[ni][nj] =d;
        q.emplace_front(ni,nj); 
    }
    return;
}

void warp( int i, int j, int d, int H, int W, vector<string> &S, deque<P> &q, vector<vector<int>> &dist ){
    for( int ei=-2;ei<=2;++ei ){
        for( int ej=-2;ej<=2;++ej ){
            int ni = i+ei, nj = j+ej; // site after move
            if( ni<0 or nj <0 or ni>=H or nj>=W ) continue; // out of board
            if( S[ni][nj] == '#' ) continue; // obsacle exists
            if( dist[ni][nj] <= d+1 ) continue; // reach within less steps;
            dist[ni][nj] = d+1;
            q.emplace_back(ni,nj);
        }
    }
    return;
}

void bfs01( int H, int W, int Ci, int Cj, vector<string> &S, vector<vector<int>> &dist ){
    dist[Ci][Cj] = 0;
    deque<P> q;
    q.emplace_back(Ci,Cj);
    while(!q.empty()){
        int i=q.front().first;
        int j=q.front().second;
        q.pop_front();
        int d = dist[i][j];
        walk( i, j, d, H, W, S, q, dist );
        warp( i, j, d, H, W, S, q, dist );
    }
    return;
}

int main(){
    int H,W;
    cin >> H >> W;
    int Ci,Cj,Di,Dj;
    cin >> Ci >> Cj;
    cin >> Di >> Dj;
    --Ci;--Cj;--Di;--Dj;
    vector<string> S(H);
    rep(i,H) cin >> S[i];
    const int INF = 1e9;
    vector<vector<int>> dist(H,vector<int>(W,INF));
    bfs01(H,W,Ci,Cj,S,dist);
    int ans = dist[Di][Dj]; // # of warp
    if( ans == INF ) ans = -1;
    cout << ans << endl;
    return 0;
}
