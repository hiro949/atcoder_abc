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
    ll ans = 0;
    ll ref = 1000;
    while(ref<=n){
        // all number with nth comma 
        ans += n-ref+1;
        ref *= 1000;
    }
    cout << ans << endl;
    return 0;
}