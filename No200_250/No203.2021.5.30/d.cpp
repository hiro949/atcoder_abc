#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

bool OK( int x, int n, int k, vector<vector<int>> &a ){
    vector<vector<int>> sum(n+1,vector<int>(n+1,0));
    rep(i,n)rep(j,n){
        sum[i+1][j+1] = (a[i][j]>=x) + sum[i+1][j] + sum[i][j+1] - sum[i][j];
    }
    for( int i=1; i<=n-k+1; ++i )for( int j=1; j<=n-k+1; ++j ){
        int cnt = sum[i+k-1][j+k-1] - sum[i-1][j+k-1] - sum[i+k-1][j-1] + sum[i-1][j-1];
        if(cnt <= k*k/2){
            return false;
        }  
    }
    return true;
}

int main(){
    int n,k;
    cin >> n >> k;
    vector<vector<int>> a(n,vector<int>(n));
    rep(i,n)rep(j,n) cin >> a[i][j];
    int rj=0, ac=1e9+1;
    while(abs(ac-rj)>1){
        int piv = (rj+ac)/2;
        if(OK(piv,n,k,a)) rj=piv;
        else ac=piv;
    }
    cout << rj << endl;
    return 0;
}
