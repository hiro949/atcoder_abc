#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n,x0,y0,x2,y2;
    cin >> n >> x0 >> y0 >> x2 >> y2;
    double cx = (double) (x0+x2)/2., cy = (double) (y0+y2)/2.;
    double dx=x0-cx,dy=y0-cy,x1,y1;
    double t1 = (double)M_PI/(n/2);
    x1 = dx*cos(t1) - dy*sin(t1) + cx;
    y1 = dx*sin(t1) + dy*cos(t1) + cy;
    printf("%f6 ",x1);
    printf("%f6",y1);
    return 0;
}

    