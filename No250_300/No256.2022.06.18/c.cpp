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
    vector<int> h(3),w(3);
    rep(i,3) cin >> h[i];
    rep(i,3) cin >> w[i];
    int ans = 0;
    for( int i11 = 1; i11<h[0]; ++i11 )for( int i12 = 1; i12<h[0]-i11; ++i12 ){
        int i13 = h[0] - i11 - i12;
        for( int i21 = 1; i21<h[1]-1; ++i21 )for( int i22 = 1; i22<h[1]-i21; ++i22 ){
            int i23 = h[1] - i21 - i22;
            int i31 = w[0] - i11 - i21;
            int i32 = w[1] - i12 - i22;
            int i33 = w[2] - i13 - i23;
            if(i31<1 or i32<1 or i33 <1) continue;
            if(i31 + i32 + i33 != h[2] ) continue;
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}