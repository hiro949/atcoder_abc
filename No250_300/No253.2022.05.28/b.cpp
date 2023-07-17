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
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    vector<P> v;
    rep(i,h)rep(j,w)if(s[i][j]=='o') v.emplace_back(i,j);
    int ans = abs(v[0].first-v[1].first) + abs(v[0].second-v[1].second);
    cout << ans << endl;
    return 0;
}