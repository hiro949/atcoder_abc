#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    queue<P> q;
    q.emplace(0,0);
    vector<vector<int>> G(h, vector<int>(w,inf)); G[0][0]=0;
    auto ok_move = [&]( int vx, int vy ){
        return 0<=vx and  vx<h and 0<=vy and vy<w;
    };
    while(!q.empty()){
        P c = q.front(); q.pop();
        int x=c.first, y=c.second;
        rep(i,4){
            int vx = x+dx[i], vy = y + dy[i];
            if( ok_move(vx,vy) and s[vx][vy] == '.' and G[x][y]<G[vx][vy] ){
                G[vx][vy] = G[x][y]; q.emplace(vx,vy);
            }
        }
        for( int ei=-2; ei<=2; ++ei )for( int ej=-2; ej<=2; ++ej )if( abs(ei)+abs(ej)<=3 ){
            int vx = x+ei, vy = y+ej;
            if( ok_move(vx,vy) and G[x][y]+1 < G[vx][vy] ){
                G[vx][vy] = G[x][y]+1; q.emplace(vx,vy);
            }
        }
    }
    cout << G[h-1][w-1] << endl;
    return 0;
}
