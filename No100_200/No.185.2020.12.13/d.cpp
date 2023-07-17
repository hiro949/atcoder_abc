#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;


int main(){
    ll n; int m;
    cin >> n >> m;
    vector<ll> a(m),sec(0);
    rep(i,m) cin >> a[i];
    a.push_back(n+1);a.push_back(0);
    sort(a.begin(),a.end());
    rep(i,m+1){
        ll si = a[i+1]-a[i]-1;
        if(si>0) sec.push_back(si);
    }
    ll k = *min_element(sec.begin(),sec.end());
    ll ans = 0;
    for( ll si : sec ) ans += (si+k-1)/k;  // if sec%k >0 => +1
    cout << ans << endl;
    return 0;
}
