#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int n;
    cin >> n;
    vector<int> a(n),b(n),c(n), b_hist(n+1,0);
    rep(i,n) cin >> a[i]; rep(i,n) cin >> b[i];
    rep(i,n){
        cin >> c[i];
        --c[i];
    }
    ll ans = 0;
    for( int i : c ) ++b_hist[b[i]];
    //rep(i,n+1) cout << b_hist[i] << " ";
    //cout << endl;
    for( int ai : a ) ans += b_hist[ai];
    cout << ans << endl;
    return 0;
}
