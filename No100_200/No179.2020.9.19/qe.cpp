#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int func( int x, int m ){
    return (x*x)%m;
}

int main(){
    ll n,x,m;
    cin >> n >> x >> m;
    vector<int> a(0), id(m,-1);
    int len = 0;
    ll tot = 0;
    while( id[x] == -1 ){
        a.push_back(x);
        id[x] = len;
        ++len;
        tot += x;
        x = (x*x)%m;
    }
    int c = len - id[x];
    ll s = 0;
    for( int i = id[x]; i<len; ++i ) s += a[i]; // one loop sum
    ll ans = 0;
    if( n <= len ){ // consider sum end in non-periodic part
        rep(i,n) ans += a[i];
    }else{
        ans += tot; // non-periodic + first loop
        n -= len;
        ans += s*(n/c);
        n %= c;
        rep(i,n) ans += a[ id[x] + i ]; // end  on the way of loop
    }
    cout << ans << endl;
    return 0;
}
