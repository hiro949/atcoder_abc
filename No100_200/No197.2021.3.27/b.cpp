#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    int h,w,x,y;
    cin >> h >> w >> x >> y;
    --x;--y;
    vector<string> mesh(h);
    rep(i,h) cin >> mesh[i];
    int x0=-1,x1=h-1,y0=-1,y1=w-1;
    rep(i,w-1){
        if( mesh[x][i]=='#' and mesh[x][i+1]=='.' and i<y ) y0=i;
        if( mesh[x][i]=='.' and mesh[x][i+1]=='#' and i>=y ){
            y1=i;
            break;
        }
    }
       rep(i,h-1){
        if( mesh[i][y]=='#' and mesh[i+1][y]=='.' and i<x ) x0=i;
        if( mesh[i][y]=='.' and mesh[i+1][y]=='#' and i>=x ){
            x1=i;
            break;
        }
    }
    //cout << x1 << " " << x0 << " " << y1 << " " << y0 << endl;
    cout << x1-x0 + y1-y0 -1 << endl;
    return 0;
}
