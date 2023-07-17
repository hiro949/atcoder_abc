#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

const int q = 998244353;

int main(){
    int N,K;
    cin >> N >> K;
    vector<int> l(K),r(K);
    rep(i,K){
        cin >> l[i] >> r[i];
    }
    vector<int> dp(N+1), dp_sum(N+1);
    dp[1] = 1;
    dp_sum[1] = 1;
    for( int i=2; i<=N; ++i ){
        rep(j,K){
            int li = max(1, (i - r[j])%q );
            int ri = (i - l[j])%q;
            if(ri<=0) continue;
            dp[i] += (dp_sum[ri] - dp_sum[li-1] + q )%q; // difference of mod => can be <0
            dp[i] %= q;
        }
        dp_sum[i] = ( dp[i] + dp_sum[i-1] )%q; // to make it faster
    }
    cout << dp[N] << endl;
    return 0;
}