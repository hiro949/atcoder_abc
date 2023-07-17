#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;
// xi,yi => t/f;
// Only y[i] = True and x[i+1]=True is OK;
// if x[i+1]=True, any sequence is OK
// if x[i+1]=False, y[i] = True is OK
              

int main(){
    int n;
    cin >> n;
    vector<ll> dp(n+1); // y[i]= True partern
    dp[0] = 1;
    rep(i,n){
        string s; cin >> s;
        dp[i+1] = dp[i];
        if(s=="OR") dp[i+1] += (1LL<<(i+1)); // shift op: 2<<i = pow(2,i)
    }
    cout << dp[n] << endl;
    return 0;
}