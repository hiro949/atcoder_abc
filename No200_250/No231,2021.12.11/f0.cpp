#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int main(){
    int n;
    cin >> n;
    vector<int> a0(n),b0(n);
    vector<P> a(n),b(n);
    rep(i,n) cin >> a0[i], a[i].first = a0[i], a[i].second=i;
    rep(i,n) cin >> b0[i], b[i].first = b0[i], b[i].second=i;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll ans = 0;
    for( P p : a ){
        int key = b0[p.second];
        cout << key << " ";
        int u = upper_bound(b.begin(),b.end(),make_pair(key,n))-b.begin();
        int l = b.end() - lower_bound(b.begin(),b.end(),make_pair(key,0));
        ans += l;
        cout << l << " " << u << endl;
    }
    cout << ans << endl;
    return 0;
}