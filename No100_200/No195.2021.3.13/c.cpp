#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep(i,n) for ( ll i=0; i< (n); ++i )
using P = pair<int,int>;

int main(){
    ll n;
    cin >> n;
    int dig = to_string(n).length();
    int d = dig/3;
    if(dig%3==0) --d;
    ll ans = 0;
    ll ref = 1;
    rep(x,d){
        ans += x*999*ref;
        ref *= 1000;
    }
    ans += d*(1+n-ref);
    cout << ans << endl;
    return 0;
}
