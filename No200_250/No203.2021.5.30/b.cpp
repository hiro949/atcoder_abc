#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int n,k;
    cin >> n >> k;
    int ans = 0;
    for( int i=1; i<=n; ++i )for( int j=1; j<=k; ++j ) ans += i*100 + j;
    cout << ans << endl;
    return 0;
}
