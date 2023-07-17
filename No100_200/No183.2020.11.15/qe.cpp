#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define mod(n,r) (n%r + r)%r
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int q = 7 + 1e9;

//dpx  : pass through [i,j] with x-direction move
//dpy  : pass through [i,j] with y-direction move
//dpxy : pass through [i,j] with diagonal-direction move
//dp   : reach [i,j]

// pass through [i,j] in x direction => pass through [i-1,j] in  x direction or stop @ [i-1,j] & move +1x

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    vector<vector<int>> dp(h+1,vector<int>(w+1)),dpx(h+1,vector<int>(w+1)),dpy(h+1,vector<int>(w+1)),dpxy(h+1,vector<int>(w+1));
    dp[0][0] = 1;
    for( int i=1; i<h; ++i ){
        dp[i][0] = i;
        dpy[i][0] = i;
        dpxy[i][0] = 0;
    }
    for( int j=1; j<w; ++j ){
        dp[0][j] = j;
        dpx[0][j] = j;
        dpxy[0][j] = 0;
    }
    for( int i=1; i<h; ++i ){
        for( int j=1; j<w; ++j ){
            if(s[i][j]=='#'){
                dp[i][j] = 0;
                dpx[i][j] = 0;
                dpy[i][j] = 0;
                dpxy[i][j] = 0;
                continue;
            }
            dp[i][j] = mod( dpx[i][j-1] + dpy[i-1][j] + dpxy[i-1][j-1], q);
            dpx[i][j] = mod( dpx[i-1][j] + dp[i-1][j], q);
            dpy[i][j] = mod( dpy[i][j-1] + dp[i][j-1], q);
            dpxy[i][j] = mod( dpxy[i-1][j-1] + dp[i-1][j-1], q);
        }
    }
    cout << dp[h-1][w-1] << endl;
    return 0;
}
