#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};

// easy case: able to break only one block

struct state{
    int x,y,cost;
};

bool operator<( const state &obj1, const state &obj2 ){
        return obj1.cost < obj2.cost;
};

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    priority_queue<state> q;
    q.push({0,0,0});
    vector<vector<int>> G(h, vector<int>(w,inf)); G[0][0]=0;
    while(!q.empty()){
        state c = q.top(); q.pop();
        rep(i,4){
            int vx = c.x+dx[i], vy = c.y + dy[i], cost=c.cost;
            if( 0<=vx and  vx<h and 0<=vy and vy<w and cost<G[vx][vy] ){
                if( s[vx][vy] == '#' ) ++cost;
                G[vx][vy] = cost; q.push({vx,vy,cost});
            }
        }
    }
    rep(i,h){
        rep(j,w) cout << G[i][j] << " ";
        cout << endl;
    }
    return 0;
}
