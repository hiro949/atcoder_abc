#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;


bool OK( ll m, ll n, vector<ll> &a ){
    rep(l,n){
        ll x = a[l];
        for( int r=l; r<n; ++r ){
            x = min(x,a[r]);
            ll count = x*(r-l+1);
            if(count>=m) return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    ll i0 = 0, i1 = 2e9;
    while(i1-i0>1){
        ll piv = (i0+i1)/2;
        if(OK(piv,n,a)) i0=piv;
        else i1=piv;
    }
    cout << i0 << endl;
    return 0;
}