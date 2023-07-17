#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using PP = pair<int,P>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int dx[4] = {-1,-1, 1, 1};
int dy[4] = {-1, 1,-1, 1};

int main(){
    int n,a[2],b[2];
    cin >> n;
    cin >> a[0] >> a[1]; --a[0];--a[1];
    cin >> b[0] >> b[1]; --b[0];--b[1];
    if( (a[0]+a[1])%2 != (b[0]+b[1])%2 ){
        cout << -1 << endl;
        return 0;
    }
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    vector<vector<vector<int>>> cost(n,vector<vector<int>>(n,vector<int>(4,inf)));
    queue<PP> q;
    auto push = [&]( int d, int x, int y){ q.emplace(d,make_pair(x,y)); };
    auto can_go = [&]( int x, int y ){ 
        if(x<0 or x>=n) return false;
        if(y<0 or y>=n) return false;
        return (s[x][y]=='.');
     };
    push(-1,a[0],a[1]);
    rep(d,4) cost[a[0]][a[1]][d]=0;
    while(!q.empty()){
        PP pp = q.front(); q.pop();
        P p2 = pp.second; 
        int d = pp.first, x = p2.first, y=p2.second;
        rep(i,4)rep(j,4){
            int c = cost[x][y][j];
            if(c==0 or i!=j) ++c;
            int nx=x+dx[i], ny=y+dy[i];
            if(!can_go(nx,ny)) continue;
            if(c>=cost[nx][ny][i]) continue;
            cost[nx][ny][i]=c;
            int nd=1;
            if(i==j) nd=0;
            push(nd,nx,ny);
        }
    }
    int ans = inf;
    rep(j,4) ans = min(ans,cost[b[0]][b[1]][j]);
    if(ans==inf) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}
