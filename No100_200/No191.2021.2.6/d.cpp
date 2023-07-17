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
    int ans = 0;
    for( int i = floor(x-r); i<=ceil(x+r); ++i )
    for( int j = floor(y-r); j<=ceil(y+r); ++j ){
        if(inner(i,j,x,y,r)<=0) ++ans;
    }
    cout << ans << endl;
    return 0;
}