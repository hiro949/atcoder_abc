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
    int n,q;
    cin >> n >> q;
    vector<int> a(n),x(q);
    rep(i,n) cin >> a[i];
    rep(i,q) cin >> x[i];
    sort(a.begin(),a.end());
    int ans;
    for( int h : x ){
        ans = a.end()-lower_bound(a.begin(),a.end(),h);
        cout << ans << endl;
    }
    return 0;
}