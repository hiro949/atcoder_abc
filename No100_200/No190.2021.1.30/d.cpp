#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

// {a0=a,a1,...,am}=> sum=(2a+x-1)x/2=n
// a = (2n/x - x + 1)/2

ll func( ll x, ll x2, ll n){
    return x2 - x + 1;
}

int main(){
    ll n;
    cin >> n;
    ll count = 0;
    for( ll x=1; x*x<=2*n; ++x ){
        if( (2*n)%x==0 ){
            ll x2 = (2*n)/x;
            if( func(x,x2,n)%2==0 ){
                ++count;
            }
            if( func(x2,x,n)%2==0 ){
                ++count;
            }
        }
    }
    cout << count << endl;
    return 0;
}
