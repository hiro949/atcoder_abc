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
    double a,b;
    cin >> a >> b;
    double len = sqrt(a*a+b*b);
    printf("%.7f ",a/len);printf("%.7f\n",b/len);
    return 0;
}