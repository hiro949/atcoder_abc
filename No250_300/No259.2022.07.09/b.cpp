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

int main(){
    double a,b,d;
    cin >> a >> b >> d;
    d *= M_PI/180.;
    double c = cos(d), s=sin(d);
    double a2 = a*c - b*s;
    double b2 = a*s + b*c;
    printf("%7f ",a2); printf("%7f \n",b2);
    return 0;
}