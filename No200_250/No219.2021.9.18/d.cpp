#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int main(){
    int n,x,y;
    cin >> n >> x >> y;
    vector<int> a(n),b(n);
    int asum=0,bsum=0;
    rep(i,n){
        cin >> a[i] >> b[i];
        asum += a[i]; bsum += b[i];
    }
    if( asum<x or bsum<y ){
        cout << -1 << endl;
        return 0;
    }
    vector<P> ab(n);
    rep(i,n){
        ab[i].first=a[i]; ab[i].second=b[i];
    }
    sort(ab.begin(),ab.end());
    rep(i,n){
        a[i]=ab[i].first; b[i]=ab[i].second;
    }
    vector<vector<int>> dp(x+1,vector<int>(y+1,inf));
    dp[0][0]=0;asum=0;bsum=0;
    rep(i,n){
        for(int j=0;j<=asum;++j)for(int k=0;k<=bsum;++k){
            int jn=min(x,j+a[i]),kn=min(y,k+b[i]);
            dp[jn][kn] = min(dp[j][k]+1,dp[jn][kn]);
        }
        asum = min(asum+a[i],x); bsum = min(bsum+b[i],y);
    }
    /*rep(i,asum){
        rep(j,bsum){
            int q = dp[i][j]==inf?0:dp[i][j];
            cout << q << " ";
        }
        cout << endl;
    }*/
    cout << dp[x][y] << endl;
    return 0;
}