#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int main(){
    int n;
    cin >> n;
    vector<double> a(n),asum(n+1),b(n),tsum(n+1);
    asum[0]=0.;tsum[0]=0.;
    rep(i,n){
        cin >> a[i] >> b[i];
        asum[i+1] = a[i] + asum[i];
        tsum[i+1] = a[i]/b[i] + tsum[i];
    }
    int ix = lower_bound(tsum.begin(),tsum.end(),tsum[n]/2.)-tsum.begin();
    ix = max(0,ix-1);
    double ans = asum[ix] + b[ix]*(tsum[n]/2.-tsum[ix]);
    printf("%.7f \n",ans);
    return 0;
}