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
    int n,q;
    cin >> n >> q;
    vector<ll> a(n),asum(n+1,0);
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end());
    rep(i,n) asum[i+1] = asum[i]+a[i];
    ll x;
    rep(i,q){
        cin >> x;
        int ix = lower_bound(a.begin(),a.end(),x) - a.begin();
        ll dm = asum[ix], dp = asum[n]-asum[ix];
        ll ans = abs(x*ix-dm) + abs(dp-x*(n-ix));
        cout << ans << endl;
    }
    return 0;
}