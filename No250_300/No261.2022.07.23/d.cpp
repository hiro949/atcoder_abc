#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<ll,ll>;
using mint = modint1000000007;
const int inf = numeric_limits<ll>::max()/2;

int main(){
    int n,m;
    cin >> n >> m;
    vector<ll> x(n);
    vector<P> bonus(m);
    rep(i,n) cin >> x[i];
    rep(i,m) cin >> bonus[i].first >> bonus[i].second;
    sort(bonus.begin(),bonus.end());
    
    return 0;
}