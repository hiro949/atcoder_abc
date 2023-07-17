#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    ll ans = 0;
    rep(l,n){
        ll x = a[l];
        for( int r=l; r<n; ++r ){
            x = min(x,a[r]);
            ans = max(ans,x*(r-l+1));
        }
    }
    cout << ans << endl;
    return 0;
}