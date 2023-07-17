#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<ll,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int main(){
    int n,a; ll k;
    cin >> n >> k;
    vector<ll> asum(n+1);
    asum[0]=0;
    rep(i,n) cin >> a, asum[i+1] = asum[i]+ a;
    vector<P> p(n+1);
    rep(i,n+1) p[i]=make_pair(asum[i],i);
    sort(p.begin(),p.end());
    ll ans = 0;
    for( P x : p ){
        ll y = x.first + k;
        ans += upper_bound(p.begin(),p.end(),make_pair(y,n)) - lower_bound(p.begin(),p.end(),make_pair(y,x.second+1));
    }
    cout << ans<< endl;
    return 0;
}