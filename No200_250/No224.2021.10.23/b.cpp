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
    int h,w;
    cin >> h >> w;
    vector<vector<int>> a(h,vector<int>(w));
    rep(i,h)rep(j,w) cin >> a[i][j];
    rep(i1,h)for(int i2=i1;i2<h;++i2)rep(j1,w)for(int j2=j1;j2<w;++j2){
        if(a[i1][j1]+a[i2][j2]>a[i2][j1]+a[i1][j2]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}