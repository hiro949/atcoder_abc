#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    ll n,k;
    cin >> n >> k;
    vector<ll> ans(n,0);
    rep(i,n) ans[i] += k/n;
    vector<P> a(n);
    rep(i,n){
        a[i].first = i;
        cin >> a[i].second;
    }
    sort(a.begin(),a.end(),[](P l, P r){return l.second<r.second;});
    rep(i,k%n) ++ans[a[i].first];
    rep(i,n) cout << ans[i] << endl;
    return 0;
}
