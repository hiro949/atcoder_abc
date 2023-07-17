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
    vector<int> t(n);
    vector<vector<int>> a(n);
    int k;
    rep(i,n){
        int k;
        cin >> t[i] >> k;
        a[i] = vector<int>(k);
        rep(j,k){ cin >> a[i][j]; --a[i][j]; }
    }
    vector<bool> need(n);
    need[n-1]=true;
    for( int i=n-1; i>=0; --i )if(need[i]){
        for( int j : a[i] ) need[j]=true;
    }
    ll ans = 0;
    rep(i,n)if(need[i]) ans += t[i];
    cout << ans << endl;
    return 0;
}
