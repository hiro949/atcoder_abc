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
    vector<ll> a(n),rem(200,0);
    rep(i,n) cin >> a[i];
    for( int ai : a ) ++ rem[ai%200];
    ll ans = 0;
    for( int r=0; r<200; ++r ){
        ans += (rem[r]*(rem[r]-1))/2;
    }
    cout << ans << endl;
    return 0;
}
