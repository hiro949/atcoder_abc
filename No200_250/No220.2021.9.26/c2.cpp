#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int main(){
    ll n; ll x;
    cin >> n;
    vector<ll> a(n),asum(n+1,0);
    rep(i,n){
        cin >> a[i];
        asum[i+1] = asum[i]+a[i];
    }
    cin >> x;
    ll k=x/asum[n], y = k*asum[n];
    k*=n;
    rep(i,n+1){
        if(y+asum[i]>x){
            k += i; break;
        }
    }
    cout << k << endl;
    return 0;
}