#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint998244353;
const int inf = numeric_limits<int>::max()/2;
const ll r= 998244353;

int main(){
    ll n;
    cin >> n;
    ll d=0,x=1;
    while(x<n){
        x*=10; ++d;
    }
    x/=10;--d;
    mint ans = n%r;
    ans *= (n+1)%r;
    ans /=2;
    ll y=10;
    for(int i=1; i<=d; ++i){
        y*=10;
        mint t = max((min(n+1,y) - y/10),0ll)%r;
        t *= (y/10-1)%r;
        ans -= t;
    }
    cout << ans.val() << endl;
    return 0;
}