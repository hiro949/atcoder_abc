#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const ll inf = numeric_limits<ll>::max()/2;

// digit dp

int n; ll x;
vector<ll> a(100);

int main(){
    cin >> n >> x;
    rep(i,n) cin >> a[i];
    vector<ll> dp(2,inf);
    rep(i,n-1){
        ll d = a[i+1]/a[i];
        ll r = x%d;
        vector<ll> p(2,inf);
        swap(dp,p);
        rep(c,2)rep(nc,2){
            ll nr = r+c-nc*d;
            dp[nc] = min(dp[nc],p[c]+abs(nr));
        }
        x /=d;
    }
    ll ans = inf;
    rep(c,2) ans = min(ans,dp[c]+abs(x+c));
    cout << ans << endl;
    return 0;
}
