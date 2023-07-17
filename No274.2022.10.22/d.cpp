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
int xMax=1e4, yMax=1e4;
int n,x,y;
vector<int> a(1e3);

bool reach(int x, int y, int i ){
    if(i==1) return (x==a[0] and y==0 );
    if(x<0 or x>xMax) return false;
    if(y<0 or y>yMax) return false;
    bool b = reach(x+a[i-1],y,i-1);
    b |= reach(x-a[i-1],y,i-1);
    b |= reach(x,y+a[i-1],i-1);
    b |= reach(x,y-a[i-1],i-1);
    return b; 
}

int main(){
    cin >> n >> x >> y;
    rep(i,n) cin >> a[i];
    if(y<0) y=-y;
    if(x-a[0]<0) x = 2*a[0]-x;
    bool ans = reach(x,y,n);
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}