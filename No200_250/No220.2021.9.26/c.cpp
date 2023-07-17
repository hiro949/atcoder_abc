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
    ll n; ll x;
    cin >> n;
    vector<ll> a(n),asum(n+1,0);
    rep(i,n){
        cin >> a[i];
        asum[i+1] = asum[i]+a[i];
    }
    cin >> x;
    ll rj=-1, ac = min(x/asum[n]+(x%asum[n]>0),ll(1e18)/n+1)*n;
    while(ac-rj>1){
        ll piv = (ac+rj)/2;
        ll y = piv/n*asum[n] + asum[piv%n];
        if(y>x) ac = piv;
        else rj = piv;
    }
    cout << ac << endl;
    return 0;
}