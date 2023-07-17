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
    ll m;
    cin >> n >> m;
    vector<ll> a(n);
    ll asum = 0;
    rep(i,n){
        cin >> a[i];
        asum += a[i];
    }
    sort(a.begin(),a.end());
    vector<ll> dp(n,0);
    dp[0] = a[0];
    for( int i=1; i<n;++i){
        ll x;
        if(a[i-1]==a[i]) x = dp[i-1];
        if(a[i]<=m){
            int im = upper_bound(a.begin(),a.end(),a[i]-1) - a.begin();
            if(im>0) x = max(x,a[im-1]);
        }else{
            int im = upper_bound(a.begin(),a.end(),a[i]-m-1) - a.begin();
            if(im>0) x = max(x,a[im-1]);
        }
        dp[i] = x + a[i];
    }
    return 0;
}