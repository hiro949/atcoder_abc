#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int ans = b/c*c;
    if(ans<a) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}