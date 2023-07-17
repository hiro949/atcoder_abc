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
    int n;
    cin >> n;
    vector<int> x(n),y(n);
    rep(i,n) cin >> x[i] >> y[i];
    double ans = 0;
    rep(i,n)for( int j=0; j<i; ++j){
        double d2 = (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
        ans = max(ans,d2);
    }
    printf("%0.7f\n",sqrt(ans));
    return 0;
}