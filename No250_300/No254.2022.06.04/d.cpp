#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max()/2;

int main(){
    ll n;
    cin >> n;
    vector<ll> sq;
    for( ll i=2; i+i<=n; ++i ) sq.push_back(i*i);
    vector<bool> no_sq(n+1,true);
    for(ll x: sq)for( ll i=1; x*i<=n; ++i )if(i*x<=n)if(no_sq[i*x]) no_sq[i*x] = false;
    vector<ll> v;
    for( ll i=1; i<=n; ++i )if(no_sq[i]) v.push_back(i);
    sq.push_back(1);sq.push_back(inf);
    sort(sq.begin(),sq.end());
    ll ans = 0;
    for( ll x : v ){
        ll c = upper_bound(sq.begin(),sq.end(),n/x) - sq.begin();
        ans += c*c;
    }
    cout << ans << endl;
    return 0;
}