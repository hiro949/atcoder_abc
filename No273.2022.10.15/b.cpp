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

int main(){
    ll x,d=10;
    int k;
    cin >> x >> k;
    while(k>0){
        ll c = x%d/(d/10);
        (x/=d)*=d;
        if(c>4) x += d;
        d*=10;
        --k;
    }
    cout << x << endl;
    return 0;
}