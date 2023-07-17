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
    int n,w;
    cin >> n >> w;
    vector<int> a(n);
    rep(i,n)cin >> a[i];
    vector<bool> OK(w+1,false);
    rep(i,n){
        int x = a[i];
        if(x>w) continue;
        OK[x] = true;
        rep(j,i){
            x = a[i]+a[j];
            if(x>w) continue;
            OK[x] = true;
            rep(k,j){
                int x = a[i]+a[j]+a[k];
                if(x>w) continue;
                OK[x] = true;
            }
        }
    }
    int ans = 0;
    for( bool u : OK )if(u) ++ans;
    cout << ans << endl;
    return 0;
}