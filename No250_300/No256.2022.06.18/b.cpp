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
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<int> base(5,0);
    int ans = 0;
    rep(i,n){
        ++base[0];
        for( int j=4;j>=0; --j){
            if(base[j]==0) continue;
            --base[j];
            int k=j+a[i];
            if(k>=4) ++ans;
            else ++base[k];
        }
    }
    cout << ans << endl;
    return 0;
}