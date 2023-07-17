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
    int n,m,a,b;
    cin >> n;
    vector<int> p(n);
    rep(i,n) cin >> p[i], --p[i];
    dsu d(n);
    vector<vector<int>> sw(m,vector<int>(2));
    cin >> m;
    rep(i,m){
        cin >> sw[i][0] >> sw[i][1];
        d.merge(--sw[i][0],--sw[i][1]);
    }
    
    return 0;
}