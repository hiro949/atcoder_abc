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

int n,k;
int nmax=2e5;
vector<vector<int>> ab(nmax,vector<int>(2));
vector<vector<bool>> flag(nmax+1,vector<bool>(4,true));

bool dfs( int i, int j ){
    if(i>=n-1) return true;
    bool tf=false;
    if(i==0 or abs(ab[i-1][j]-ab[i][0])<=k){
        flag[i][j] = dfs(i+1,0);
    }
    if(i==0 or abs(ab[i-1][j]-ab[i][1])<=k){
        
        flag[i][j] = dfs(i+1,1);
    }
    return tf;
}

int main(){
    cin >> n >> k;
    rep(i,n) cin >> ab[i][0];
    rep(i,n) cin >> ab[i][1]; 
    if( dfs(a[0],0) or dfs(b[0],0) ) cout << "Yes" <<endl;
    else cout << "No" <<endl;
    return 0;
}