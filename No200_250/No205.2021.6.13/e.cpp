#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max();

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<mint> power(n+m+1);
    power[0] = 1;
    for( int i=1; i<=n+m; ++i ) power[i] = mint(i)*power[i-1];
    auto comb = [&](int n, int r ){ return power[n]*power[r].inv()*power[n-r].inv();};
    rep(i,k+1) dp[i] = 0;
    for( int i=k+1; i<=n; ++i )

}