#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

const int Q = 7 + 1e9;

ll exp( ll n, ll m ){
    if( m == 0 ) return 1;
    if(m%2==0) return ( exp(n,m/2)*exp(n,m/2) )%Q;
    else return ( n*exp(n,m-1) )%Q;
}
// x**(2n) = (x**n)**2 => ~O(n/2)

int main(){
    int N;
    cin >> N;
    ll w_all = exp(10,N); // 0...9
    ll w_wo_0 = exp(9,N); // 1..9 ( = 0..8)
    ll w_wo_09 = exp(8,N); // 1...8
    ll ans = ( ( w_wo_09 - (2*w_wo_0)%Q + w_all )%Q + Q )%Q;
    // we take the remainder so w_all - 2*w_wo0 + w_wo_09 can <0;
    cout << ans << endl;
    return 0;
}
