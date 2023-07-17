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

int dx[2] = {1,0};
int dy[2] = {0,1};

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> c(h);
    rep(i,h) cin >> c[i];
    vector<vector<int>> cnt(h,vector<int>(w,0));
    queue<P> q; q.emplace(0,0);
    cnt[0][0]=1;
    while(!q.empty()){
        P p=q.front(); q.pop();
        rep(i,2){
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if( nx<0 or h<=nx or ny<0 or w<=ny ) continue;
            if(c[nx][ny]=='#' or cnt[nx][ny]>cnt[p.first][p.second]) continue;
            cnt[nx][ny] = cnt[p.first][p.second]+1;
            q.emplace(nx,ny);
        }
    }
    int ans = 0;
    rep(x,h)rep(y,w) ans = max(ans,cnt[x][y]);
    cout << ans <<endl;
    return 0;
}