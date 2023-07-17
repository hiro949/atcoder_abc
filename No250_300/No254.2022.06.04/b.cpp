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
    int n;
    cin >> n;
    vector<vector<int>> ans(n,vector<int>(n));
    rep(i,n){
        ans[i][0]=1; ans[i][i]=1;
    }
    for(int i=1; i<n; ++i )for( int j=1; j<i; ++j){
        ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
    }
    for(int i=0; i<n; ++i ){
        for( int j=0; j<=i; ++j){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}