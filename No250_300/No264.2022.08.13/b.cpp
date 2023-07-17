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
    int r,c;
    cin >> r >> c;
    int d = max(abs(r-8),abs(c-8)); // map on 1/8 triangle (Chebyshev distance)
    if(d%2==0) cout << "white" << endl;
    else cout << "black" << endl;
    return 0;
}