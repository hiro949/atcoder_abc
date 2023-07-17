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
    vector<int> a(n),a2;
    set<int> s;
    rep(i,n){
        cin>> a[i];
        s.insert(a[i]);
    }
    for( int x: s) a2.push_back(x);
    vector<int> cnt(n+1,0);
    rep(i,n){
        int ans = 0;
        int c = a2.end() - upper_bound(a2.begin(),a2.end(),a[i]);
        ++cnt[c];
    }
    rep(k,n) cout << cnt[k] << endl;
    return 0;
}