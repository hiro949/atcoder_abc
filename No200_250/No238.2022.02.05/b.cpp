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
    vector<int> a(n),asum(n+1,0);
    rep(i,n){
        cin >> a[i];
    }
    reverse(a.begin(),a.end());
    rep(i,n){
        asum[i+1] = asum[i]+a[i];
        asum[i+1] %=360;
    }
    sort(asum.begin(),asum.end());
    int ans = abs(360-asum[n]);
    rep(i,n) ans = max(ans,abs(asum[i+1]-asum[i]));
    cout << ans << endl;
    return 0;
}