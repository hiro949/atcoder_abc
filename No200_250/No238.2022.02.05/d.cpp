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

bool __init__(){
    ll a,s;
    cin >> a >> s;
    ll x=1;
    for(int i=0; x<=a; ++i ){
        x*=2;
        if(a>>i&1) s-=x;
    }
    if(s<0) return false;
    if(s&a) return false; 
    return true;
}

int main(){
    int t;
    cin >> t;
    rep(it,t){
        if(__init__()) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}