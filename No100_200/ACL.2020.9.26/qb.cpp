#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    ll A, B ,C, D;
    cin >> A >> B >> C >> D;
    if( A>D or C>B ) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}