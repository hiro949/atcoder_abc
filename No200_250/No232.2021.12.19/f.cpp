#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const ll inf = numeric_limits<ll>::max()/2;

// 1/2 step need to move any pos.
//operator2 -> number of fall -> bit dp
//compensate op.1
//#swap >= # of cross section among edges in mathcing graph

int main(){
    int n; ll x,y;
    cin >> n >> x >> y;
    vector<int> a(n),b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];

    int n2 = 1<<n;
    vector<ll> dp(n2,inf);
    dp[0]=0;
    rep(bit,n2){
        //count # of 1 in bit;
        int j=__builtin_popcount(bit);
        rep(i,n)if(bit>>i&0){
            ll cost = abs(a[i]-b[j])*x;
            cost = __builtin_popcount(bit>>i)*y;
            dp[bit] = min(dp[bit|1<<i],dp[bit]+cost);
        }
    }
    cout << dp[n2-1] << endl;
    return 0;
}