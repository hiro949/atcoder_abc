#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll,ll> map;
    rep(i,n){
        cin >> a[i];
        map[a[i]] = 0;
    }
    for( ll ai : a ) ++map[ai];
    ll ans = n*(n-1)/2;
    for( auto m : map ) ans -= m.second*(m.second-1)/2;
    cout << ans << endl;
    return 0;
}