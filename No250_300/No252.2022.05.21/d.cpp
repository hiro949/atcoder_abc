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
    map<int,int> mp;
    rep(i,n){
        cin >> a[i];
        ++mp[a[i]];
    }
    int len = mp.size();
    ll ans = len*(len-1)*(len-2)/6;
    for( const auto &x : mp){
        ans *= x.second;
    }
    cout << ans << endl;
    return 0;
}