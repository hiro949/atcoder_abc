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

ll gcd( ll m, ll n ){ // m/n
    if( n==0 ) return m;
    return gcd( n, m%n);
}

ll lcm( ll m, ll n) {
    return m*n/gcd(m,n);
}

int main(){
    ll n,a,b;
    cin >> n>> a >> b;
    ll ab = lcm(a,b);
    ll ans = n*(n+1)/2;
    ll na = n/a, nb=n/b, nab=n/ab;
    ans -= a*na*(na+1)/2 + b*nb*(nb+1)/2 - ab*nab*(nab+1)/2;
    cout << ans << endl;
    return 0;
}