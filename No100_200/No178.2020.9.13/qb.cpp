#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    vector<ll> prd(0);
    prd.push_back(a*c);
    prd.push_back(a*d);
    prd.push_back(b*c);
    prd.push_back(b*d);
    ll ans = *max_element( prd.begin(), prd.end() );
    cout << ans << endl;
    return 0;
}