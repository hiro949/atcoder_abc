#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

struct r{
    ll x,y;
};

bool OK( r a, r b, r c ){
    return (c.y-a.y)*(b.x-a.x) != (b.y-a.y)*(c.x-a.x);
}

int main(){
    int n;
    cin >> n;
    vector<r> v(n);
    rep(i,n) cin >> v[i].x >> v[i].y;
    ll ans = 0;
    rep(i1,n)for( int i2=i1; i2<n; ++ i2)for( int i3=i2; i3<n; ++i3){
        if( OK(v[i1],v[i2],v[i3]) ) ++ans;
    }
    cout << ans << endl;
    return 0;
}