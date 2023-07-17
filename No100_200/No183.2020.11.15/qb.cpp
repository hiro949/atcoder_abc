#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int sx,sy,gx,gy;
    cin >> sx >> sy >> gx >> gy;
    cout << fixed << setprecision(10) << sy/double(sy+gy)*(gx-sx) + sx << endl;
    return 0;
}