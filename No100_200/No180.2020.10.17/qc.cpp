#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

void door_to_door( int N, set<int> &s ){
    for( int x=1; x*x<=N; ++x ){ 
        if( N%x == 0 ){
            s.insert(x);
            s.insert(N/x);
        }
    }
    return;
}


int main(){
    ll n;
    cin >> n;
    set<ll> s;
    for( int x=1; x*x<=n; ++x ){
        if( n%x == 0 ){
            s.insert(x);
            s.insert(n/x);
        }
    }
    for( ll x: s ) cout << x << endl;
    return 0;
}