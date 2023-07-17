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
    vector<vector<int>> r(4,vector<int>(2));
    rep(i,4)rep(j,2) cin >> r[i][j];
    rep(i,4){
        int ax = r[(i+1)%4][0]-r[i][0];
        int ay = r[(i+1)%4][1]-r[i][1];
        int bx = r[(i+2)%4][0]-r[i][0];
        int by = r[(i+2)%4][1]-r[i][1];
        int z = ax*by-ay*bx;
        if(z<=0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}