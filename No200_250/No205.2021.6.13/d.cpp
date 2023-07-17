#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

ll get_ki( ll k, int n, vector<ll> &a ){
    ll ac = 0, rj=2e18;
    while(rj-ac>1){
        ll piv = (ac+rj)/2;
        // id of piv < k? 
        ll rmv = upper_bound(a.begin(),a.end(),piv) - a.begin();
        if(piv-rmv < k) ac = piv;
        else rj = piv;
    }
    return rj;
}

int main(){
    int n,q;
    cin >> n >> q;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end());
    ll k;
    rep(i,q){
        cin >> k;
        cout << get_ki(k,n,a) << endl;
    }
    return 0;
}