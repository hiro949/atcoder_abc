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
    dp[0]=0;dp[1]=0;
    queue<int> q;
    q.push(1);
    int i,i1,i2;
    while(q.size()){
        i=q.front(); q.pop();
        int y=1;
        while(i<10*y) y*=10;
        i1=a*i;
        if(dp[i1]>dp[i]+1){
            dp[i1] = dp[i]+1; q.push(i1);
        }
        if(i%10!=0 and i>=10 ){
            i2=i%y*10 + i/y;
            if(dp[i2]>dp[i]+1){
                dp[i2] = dp[i]+1; q.push(i2);
            }
        }
    }
    if(dp[n]==inf) dp[n]=-1;
    cout << dp[n] << endl;
    return 0;
}