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

int main(){
    int n,m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    ll x = 0, sum=0;
    rep(i,m){
        x += (i+1)*a[i];
        sum += a[i];
    }
    int i = m;
    ll ans = x;
    while(i<n){
        x -= sum;
        x+= m*a[i];
        sum -= a[i-m];
        sum += a[i];
        ++i; 
        ans = max(ans,x);
    }
    cout << ans << endl;
    return 0;
}