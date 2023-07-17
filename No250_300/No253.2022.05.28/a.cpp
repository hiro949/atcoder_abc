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
    int a,b,c;
    cin >>a >> b >> c;
    if(a<=b and b<=c) cout << "Yes" << endl;
    else if(c<=b and b<=a) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}