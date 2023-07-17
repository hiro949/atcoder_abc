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
    int n;
    ll l,r;
    cin>> n >> l >> r;
    vector<ll> a(n),asum(n),L(n+1),R(n+1);
    rep(i,n) cin >> a[i];
    asum[0]=a[0];
    rep2(i,1,n) asum[i] = asum[i-1] + a[i];
    ll ans = inf;
    L[0]=0; R[0]=0;
    rep(i,n) L[i+1] = L[i] + l - a[i];
    rep(i,n) R[i+1] = R[i] + r - a[n-1-i] ;
    int il=0,ir=0;
    
    return 0;
}