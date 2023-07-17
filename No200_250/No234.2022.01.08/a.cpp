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

int f(int x){return x*x+2*x+3;}

int main(){
    int t;
    cin >> t;
    int ans = f(f(f(t)+t)+f(f(t)));
    cout << ans << endl;
    return 0;
}