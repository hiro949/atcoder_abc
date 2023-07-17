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

double expect(int n){
    if(n==0) return 0.;
    double p0 = 1./6.;
    double x = expect(n-1);
    double ans = 0.;
    for( int i=1; i<=6; ++i){
        ans += p0*max(double(i),x);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    printf("%0.7f \n",expect(n));
    return 0;
}