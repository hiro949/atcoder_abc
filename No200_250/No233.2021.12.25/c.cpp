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

int n; ll x;
vector<int> l(1e5);
vector<vector<int>> a(1e5,vector<int>());

//full-search

ll dfs( ll y, ll r, int i ){
    if(y%r>0) return 0;
    if(y==0) return 0;
    y/=r;
    ll ans = 0;
    if(i==0){
        ans = upper_bound(a[0].begin(),a[0].end(),y)-lower_bound(a[0].begin(),a[0].end(),y);    
        return ans;    
    }
    rep(j,l[i]) ans += dfs(y,a[i][j],i-1);
    return ans;
}

int main(){
    cin >> n >> x;
    int ai;
    rep(i,n){
        cin >> l[i];
        rep(j,l[i]) cin >> ai, a[i].push_back(ai);
    }
    rep(i,n) sort(a[i].begin(),a[i].end());
    cout << dfs(x,1,n-1) << endl;
    return 0;
}