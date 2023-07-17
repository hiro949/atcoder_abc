#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

void output( vector<int> &v ){
    cout << v.size() << " ";
    for( int i : v ) cout << i+1 << " ";
    cout << endl;
    return;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
        a[i]%=200;
    }
    vector<vector<vector<vector<int>>>> dp(n,vector<vector<vector<int>>>(200,vector<vector<int>>(0,vector<int>(0))));
    dp[0][a[0]].push_back({0});
    for( int i=1; i<n; ++i ){
        dp[i][a[i]].push_back({i});
        rep(r,200){
            int r2 = (r + a[i])%200;
            rep(j,dp[i-1][r2].size()){
                if(dp[i][r2].size()<2){
                    vector<int> v = dp[i-1][r2][j];
                    dp[i][r2].push_back(v);
                }
            }
            rep(j,dp[i-1][r].size()){
                if(dp[i][r2].size()<2){
                    vector<int> v = dp[i-1][r][j];
                    v.push_back(i);
                    dp[i][r2].push_back(v);
                }
            }
        }
    }
    rep(r,200){
        int cnt = dp[n-1][r].size();
        if(cnt>=2){
            vector<int> b=dp[n-1][r][0], c=dp[n-1][r][1];
            cout << "Yes" << endl;
            output(b); output(c);
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
