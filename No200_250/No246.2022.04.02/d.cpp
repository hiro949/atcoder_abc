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

ll n;

//E(a,b): x>=a^3+a^3b+ab^2+b^3
bool OK( ll x ){
    
}

int main(){
    cin >> n;
    ll rj=n-1, ac=1e18;
    while(ac-rj>1){
        ll piv= (ac+rj)/2;
        if(OK(piv)) ac = piv;
        else rj=piv;
    }
    cout << ac << endl;
    return 0;
}