#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<ll,ll>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int main(){
    int n,w;
    cin >> n >> w;
    vector<P> cheese(n);
    rep(i,n) cin >> cheese[i].first >> cheese[i].second;
    sort(cheese.rbegin(),cheese.rend());
    ll wsum=0;
    ll ans=0;
    for( int i=0; i<n and wsum<w; ++i){
        ll x = min(cheese[i].second, w-wsum);
        ans += cheese[i].first*x;
        wsum += x;
    }
    cout << ans << endl;
    return 0;
}