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

int main(){
    int n,amax,amin;
    cin >> n >> amax >> amin;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<int> dp(4,0);
    ll cnt = 0;
    rep(i,n){
        if(a[i]<amin or a[i]>amax){
            dp[0]=0,dp[1]=0,dp[2]=0,dp[3]=0;
            continue;
        }
        if(amin<a[i] and a[i]<amax){
            ++dp[0];
            cnt += dp[3];
            continue;
        }
        vector<int> dp2(4,0);
        swap(dp2,dp);
        if(amax>amin){
            dp[3]=dp2[3];
            if(a[i]==amax){
                dp[1] = dp2[1] + dp2[0] + 1;
                dp[3] += dp2[2];
            }
            else if(a[i]==amin){
                dp[2] = dp2[2] + dp2[0] + 1;
                dp[3] += dp2[1];
            }
        }else{
            dp[3]= dp2[3] + dp2[0] + 1;
        }
        cnt += dp[3];
    }
    cout << cnt << endl;
    return 0;
}