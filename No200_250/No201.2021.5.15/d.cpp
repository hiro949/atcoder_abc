#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
//dp w.r.t. start position
//chose cirtainly-winning, even, or cirtainly-losing route
// find pos is winning,even, or losing
// back-track start

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> a(h);
    rep(i,h) cin >> a[i];
    vector<vector<int>> dp(h,vector<int>(w)); //plaryer1 - plaryer2
    auto point = [](char c){ return c=='+' ? 1 : -1; };
    auto update_p1 = [&](int i, int j){
        int res = -inf;
        if(i<h-1) res = max(res,dp[i+1][j]+point(a[i+1][j]));
        if(j<w-1) res = max(res,dp[i][j+1]+point(a[i][j+1]));
        return res;
    };
    auto update_p2 = [&](int i, int j){
        int res = inf;
        if(i<h-1) res = min(res,dp[i+1][j]-point(a[i+1][j]));
        if(j<w-1) res = min(res,dp[i][j+1]-point(a[i][j+1]));
        return res;
    };
    
    for( int i=h-1; i>=0; --i )for( int j=w-1; j>=0; --j ){
        if( i==h-1 and j==w-1 ){
            dp[i][j]=0;
            continue;
        }
        if((i+j)%2==0) dp[i][j] = update_p1(i,j);
        else dp[i][j] = update_p2(i,j); 
    }
    if( dp[0][0]>0 ) cout << "Takahashi" << endl;
    else if( dp[0][0]<0 ) cout << "Aoki" << endl;
    else cout << "Draw" << endl;
    return 0;
}
