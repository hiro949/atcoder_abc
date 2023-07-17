#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n; 
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    ll ans = LONG_LONG_MAX;
    for( int bit=0; bit<(1<<(n-1)); ++bit ){
        
        vector<int> v(0);
        v.push_back(0);
        rep(i,n-1) if( bit&(1<<i) ) v.push_back(i+1);
        v.push_back(n);

        ll a_xor = 0;
        rep(i,v.size()-1){
            ll tmp = 0;
            for(int j=v[i]; j<v[i+1]; ++j ) tmp |= a[j];
            a_xor ^= tmp;
        }
        ans = min(ans,a_xor);
    }
    cout << ans << endl;
    return 0;
}
