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
    int n,k,x;
    cin >> n >> k >> x;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end());
    for( int i=n-1; i>=0; --i ){
        if(k==0) break;
        int use = min(a[i]/x,k);
        a[i] -= use*x;
        k -=use;
    }
    sort(a.begin(),a.end());
    for( int i=n-1; i>=0; --i ){
        if(k==0) break;
        a[i]= max(a[i]-x,0);
        --k;
    }
    ll ans = 0;
    rep(i,n) ans += a[i];
    cout << ans << endl;
    return 0;
}