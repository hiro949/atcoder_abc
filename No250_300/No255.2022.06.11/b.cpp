#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const ll inf = numeric_limits<ll>::max();

int main(){
    int n,k;
    cin >> n >> k;
    vector<ll> a(k),x(n),y(n);
    rep(i,k) cin >> a[i],--a[i];
    rep(i,n) cin >> x[i] >> y[i];
    vector<bool> flag(n,true);
    for( int ai : a ) flag[ai]=false;
    ll ans2 = 0;
    rep(i,n)if(flag[i]){
        ll tmp = inf;
        rep(j,n)if(!flag[j]){
            ll dx = x[i]-x[j], dy = y[i]-y[j];
            tmp = min(tmp,dx*dx+dy*dy);        
        }
        ans2 = max(ans2,tmp); 
    }
    printf("%.10f",sqrt(double(ans2)));
    return 0;
}