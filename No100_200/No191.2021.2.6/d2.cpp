#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;
// (n-x)^2+(m-y)^2<=r^2
// n*n + m*m - 2(n*x+m*y) <= r^2-x^2-y^2

double inner( int m, int n, double x, double y, double r ){
    return (m-x)*(m-x) + (n-y)*(n-y) - r*r;
}

int main(){
    double x,y,r;
    cin >> x >> y >> r;
    int x0=ceil(x-r),x1=floor(x+r);
    auto get_dy = [&]( int i){
        return sqrt( r*r-(i-x)*(i-x) );
    };
    ll ans = 0;
    for( int i=x0;i<=x1;++i){
        double dy = get_dy(i);
        int y0=ceil(y-dy),y1=floor(y+dy);
        //cout << i << " " << dy << " " << y-dy << " " << y+dy << endl;
        //if( inner(i,y0,x,y,r)>0 ) continue;
        ans += y1-y0+1;
    }
    cout << ans << endl;
    return 0;
}