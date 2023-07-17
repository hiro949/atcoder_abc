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
    int dig = to_string(n).length()/2;
    ll x = 1;
    rep(i,dig) x*=10;
    if( to_string(n).length()%2==1 ) n = x*(x-1)+x-1;
    if(n<x*x/10+x/10){
        x /= 10;
        n = x*(x-1)+x-1;
        --dig;
    }
    ll ans = x-1;
    ll xmax = min(n/x,n%x);
    //cout << ans << " " << xmax << endl;
    ans -= max(x-1-xmax,0ll);
    cout << ans << endl;
    return 0;
}