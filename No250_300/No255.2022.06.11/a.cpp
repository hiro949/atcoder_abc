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
    int r,c;
    vector<vector<int>> a(2,vector<int>(2));
    cin >> r >> c;--r;--c;
    cin >> a[0][0]>> a[0][1] >> a[1][0] >> a[1][1];
    cout << a[r][c] << endl;
    return 0;
}