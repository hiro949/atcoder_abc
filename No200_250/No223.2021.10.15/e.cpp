#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

ll divCeil(ll s, ll t ){ return  (s+t-1)/t; }
bool OK2( ll x, ll y, ll a, ll b  ){
    ll w = divCeil(a,y) + divCeil(b,y);
    return w<=x;
}
bool OK( ll x, ll y, ll a, ll b, ll c ){
    ll w=divCeil(a,y);
    if(w>=x) return false;
    x-= w;
    // divide parallel or perpendicular direction 
    return( OK2(x,y,b,c) or OK2(y,x,b,c) );
}

int main(){
    ll x,y,a,b,c;
    cin >> x >> y >> a >> b >> c;
    // devide into 2 parts (2 times)
    rep(fi,2){
        rep(ri,3){
            if(OK(x,y,a,b,c)){
                cout << "Yes" << endl;
                return 0;
            }
            swap(a,b); swap(b,c);
        }
        swap(x,y);
    }
    cout << "No" << endl;
    return 0;
}