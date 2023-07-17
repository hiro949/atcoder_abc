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

std::vector<std::vector<int>> pascal(201,std::vector<int>(201, 0));
    
void comb() {
    for (int i = 0; i < pascal.size(); i++) {
        pascal[i][0] = 1;
        pascal[i][i] = 1;
    }
    for (int j = 1; j < pascal.size(); j++) {
        for (int k = 1; k < j; k++) {
        pascal[j][k] = (pascal[j - 1][k - 1] + pascal[j - 1][k]);
        }
    }
  return;
}

int main(){
    int n,m;
    cin >> n >> m;
    comb();
    vector<int> a(n+1),b(m+1,0),c(n+m+1);
    rep(i,n+1) cin >> a[i];
    rep(i,n+m+1) cin >> c[i];
    vector<vector<int>> w(n+m+1,vector<int>(m+1,0));
    for (int j = 0; j <=n+m; j++) {
        for (int k = 0; k <= m; k++)if(j-k>=0 and j-k<=n){
            w[j][k] += pascal[j][k]*a[j-k];
        }
    }
    int ib=m;
    for(int k=n+m;k>=0;--k){
        b[ib] = c[k];
        if(w[k][ib]==0) continue;
        for( int j=0;j<=m; ++j )if( j!=ib ){
            b[ib] -= w[k][j]*b[j];
        }
        b[ib] /= w[k][ib];
        --ib;
        if(ib<0) break;
    }
    rep(i,m+1) cout << b[i] << " ";
    cout << endl;
    return 0;
}