#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max();

char c_ref[8]={'c','h','o','k','u','d','a','i'};

int main(){
    string s;
    cin >> s;
    int n = s.length();
    reverse(s.begin(),s.end());
    vector<mint> dp(9,0);
    for( char c : s ){
        for( int i=7; i>=0; --i)if( c==c_ref[i] ){
            dp[i] += dp[i+1];
            if(i==7) ++dp[i];
        }
    }
    cout << dp[0].val() << endl;
    return 0;
}