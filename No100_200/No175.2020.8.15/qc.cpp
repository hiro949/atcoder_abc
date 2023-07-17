#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    ll X0, K, D;
    cin >> X0 >> K >> D;
    ll X = abs(X0);
    ll N = X/D;
    if( K <= N ){
        cout << X - K*D << endl;
    }else{
        ll L = (K-N)%2;
        ll MIN = min( abs( X - (N + L)*D ), abs( X - (N - L)*D ) );
        cout << MIN << endl;
    }
    return 0;
}