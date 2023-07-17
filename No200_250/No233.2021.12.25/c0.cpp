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
    int n; ll x;
    cin >> n >> x;
    vector<int> l(n);
    vector<vector<int>> a(n,vector<int>());
    rep(i,n){
        cin >> l[i];
        int ai;
        rep(j,l[i]) cin >> ai, a[i].push_back(ai);
    }
    rep(i,n) sort(a[i].begin(),a[i].end());
    map<int,int> mp1,mp2;
    for( int v : a[0] ) mp1[v] = 1;
    for( int i=1; i<n; ++i ){
        for( int v : a[i] )
        mp2[]
    }
    return 0;
}