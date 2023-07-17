#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
int n,k;
vector<string> s(8);
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};

int dfs( int res ){
    if(res==0) return 1;
    auto ok_neighbor = [&]( int x, int y ){
        return 0<=x and x<n and 0<=x and y<n and s[x][y]=='o';
    };
    int ans = 0;
    set<P> used; 
    rep(x,n) rep(y,n) if(s[x][y]=='.'){
        bool OK = false;
        rep(i,4) OK |=  ok_neighbor(x+dx[i],y+dy[i]);
        if(!OK and res<k) continue;
        s[x][y]='o';
        ans += dfs(res-1);
        s[x][y]='#'; used.insert({x,y});
    }
    for( P p : used ) s[p.first][p.second]='.';
    return ans;
}

int main(){
    cin >> n >> k;
    rep(i,n) cin >> s[i];
    cout << dfs(k) << endl;
    return 0;
}
