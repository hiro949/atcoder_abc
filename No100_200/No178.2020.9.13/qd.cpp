#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

const ll Q = 7 + 1e9;

int count_sumS( int s ){
    // using dp labeled by length & sum
    vector<vector<int>> dp( s/3+1 ,vector<int>(s+1,0));
    for( int i = 3; i<=s; ++i ) dp[1][i] = 1;
    for( int i=1; i<s/3; ++i ){
        for( int j=3*i; j<=s; ++j ){
            for( int x=3; x<=s and j + x <= s ; ++x ){
                dp[i+1][j+x] += dp[i][j]%Q;
                dp[i+1][j+x] = dp[i+1][j+x]%Q;
            }
        }
    }
    ll ans = 0;
    rep(j,s/3+1){
         ans += dp[j][s]%Q;
         ans = ans%Q;
    }
    return ans;
}

int count_sumS_v2( int s ){
    // using dp labeled by length & sum
    vector<int> dp(s+1); 
    dp[0] = 1;
    int sum = 0; // sum is not necessary to be index
    for( int i=3; i<=s; ++i ){
        sum += dp[i-3];
        sum %= Q;
        dp[i] = sum;
    }
    return dp[s];
}

int main(){
    int S;
    cin >> S;
    cout << count_sumS( S ) << endl;
    return 0;
}
     