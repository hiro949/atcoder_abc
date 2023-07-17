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
    rep(i,n) cin >> a[i], --a[i];
    vector<set<int>> v(n,set<int>());
    ll cnt = 0;
    rep(i,n){
        if(a[i]!=i) v[a[i]].insert(i);
        else ++cnt;
    }
    ll ans = cnt*(cnt-1);
    rep(i,n)if(v[i].count(a[i])!=0) ++ans;
    cout << ans/2 << endl;
    return 0;
}
