#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint998244353;
const int inf = numeric_limits<int>::max();

int main(){
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    vector<P> ab;
    rep(i,n) ab.emplace_back(a[i],b[i]);
    sort(ab.begin(),ab.end());
    rep(i,n){
        a[i] = ab[i].first;
        b[i] = ab[i].second;
    }
    vector<vector<mint>> dp(n+1,vector<mint>(1e8,0));
    dp[0][0] = 1;
    set<int> s={0},s2;
    rep(i,n){
        for( int x : s ){
            dp[i+1] = dp[i];
            if(a[i]>x+b[i]) dp[i]
            
    }
}