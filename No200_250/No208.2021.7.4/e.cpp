#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
// count dig_product>=k 

int main(){
    string n;
    ll k;
    cin >> n >> k;
    int L = n.length();
    reverse(n.begin(),n.end());
    vector<vector<vector<ll>>> dp(L+1,vector<vector<ll>>(2,vector<ll>(10,0)));
    dp[0][0][0] = 1;
    for( int i=1; i<=L; ++i ){
        int sup = n[i-1]-'0';
        rep(j,sup) dp[i][0][j] += dp[i-1][0][j];
    
}