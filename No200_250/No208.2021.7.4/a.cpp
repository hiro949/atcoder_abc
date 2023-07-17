#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int a,b;
     cin >> a >> b;
     if( a<=b and b<=6*a ) cout << "Yes" << endl;
     else cout << "No" << endl;
     return 0;
}