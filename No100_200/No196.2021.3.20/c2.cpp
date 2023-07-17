#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;



int main(){
    ll n;
    cin >> n;
    ll ans = 1;
    auto f = []( ll x ){ return stoll(to_string(x)+to_string(x)); };
    while(f(ans)<=n) ++ans;
    --ans;
    cout << ans << endl;
    return 0;
}