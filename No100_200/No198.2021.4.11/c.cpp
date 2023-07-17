#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    ll r,x,y;
    cin >> r >> x >> y;
    ll d2 = x*x + y*y;
    if( d2<r*r ){
        cout << 2 << endl;
        return 0;
    }
    if( d2==r*r ){
        cout << 1 << endl;
        return 0;
    }
    cout << ll(ceil((double)sqrt(d2)/r)) << endl;
    return 0;
}
