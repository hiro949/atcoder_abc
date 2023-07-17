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

int h,w;
vector<string> c(100);
int dx[2] = {1,0};
int dy[2] = {0,1};

vector<vector<bool>> flag(100,vector<bool>(100,false));

// max val walking from (x,y)
int dfs( int x, int y ){
    if( x<0 or h<=x or y<0 or w<=y ) return 0;
    if(c[x][y]=='#') return 0;
    if(flag[x][y]) return 0;
    flag[x][y]=true;
    int c = 0;
    rep(i,2){
        int nx=x+dx[i], ny=y+dy[i];
        c = max(c,dfs(nx,ny)+1);
    }
    flag[x][y]=false;
    return c;
}

int main(){
    cin >> h >> w;
    rep(i,h) cin >> c[i];
    cout << dfs(0,0) << endl;
    return 0;
}