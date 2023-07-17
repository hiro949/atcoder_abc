#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n,nmax=1e5;
    cin >> n;
    vector<int> T(n),x(n);
    vector<ll> a(n);
    rep(i,n) cin >> T[i] >> x[i] >> a[i];
    vector<ll> dp(5,0);
    int i=0;
    for( int t=1; t<=nmax; ++t ){
        vector<ll> dp2(5);
        swap(dp,dp2);
        if(t<5){
            rep(j,t-2) dp[j] = max(max(dp2[j],dp2[j+1]),dp2[max(j-1,0)]);
            dp[t-1] = max(dp2[t-1],dp2[max(t-2,0)]);
            dp[t] = dp2[t-1];
        }else{
            rep(j,5){
                dp[j] = max(max(dp2[j],dp2[max(0,j-1)]),dp2[min(4,j+1)]);
            }
        }
        if(t==T[i]){
            if(x[i]<=min(t,4)) dp[x[i]] += a[i];
            ++i;
        }
    }
    ll ans = 0;
    rep(j,5) ans = max(ans,dp[j]);
    cout << ans << endl;
    return 0;
}