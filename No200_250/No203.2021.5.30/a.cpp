#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int a,b,c;
    cin >>a >> b >> c;
    if( a!=b and b!=c and c!=a ) cout << 0 << endl;
    else if( a==b ) cout << c << endl;
    else if( b==c ) cout << a << endl;
    else cout << b << endl;
    return 0;
}