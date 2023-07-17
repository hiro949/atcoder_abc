#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int a,n;

int main(){
    cin >> a >> n;
    vector<int> dp(1e6+1,inf);
    dp[n]=0;
    int x1,x2;
    for( int x=n; x>0; --x ){
        if(x%a==0 ){
            x1=x/a;
            dp[x1] = min(dp[x1],dp[x]+1);
        }
        if(x%10!=0 and x>=10){
            int y=1;
            while(x<10*y) y*=10;
            x2 = x%y*10 + x/y;
            dp[x2]= min(dp[x2],dp[x]+1);
        }
        cout << x1 << " " << x2 << endl;
    }
    if(dp[1]==inf) dp[1]=-1;
    rep(i,n+1) cout << dp[i] << endl; 
    cout << dp[1] << endl; 
   return 0;
}