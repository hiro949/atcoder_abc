#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<int> c(n+1);
    int now = 0;
    rep(i,m) ++c[a[i]];
    while (c[now]) ++ now;
    int ans = now;
    for( int i=m; i<n; ++i ){
        ++c[a[i]]; --c[a[i-m]];
        if( c[a[i-m]]==0 and a[i-m]<now ) now = a[i-m];
        ans = min(ans,now);
    }
    cout << ans << endl;
}