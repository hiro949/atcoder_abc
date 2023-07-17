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
    ll n, a, b, p, q, r, s;
    cin >> n >> a >> b;
    cin >> p >> q >> r >> s;
    vector<string> maze(q-p+1,string(s-r+1,'.'));
    auto cond1 = [&](ll k){
        ll u=max(1-a,1-b), v=min(n-a,n-b);
        return (u<=k and k<=v);
    };
    auto cond2 = [&](ll k){
        ll u=max(1-a,b-n), v=min(n-a,b-1);
        return (u<=k and k<=v);
    };
    for( ll i=p; i<=q; ++i )for( ll j=r; j<=s; ++j ){
        if(i-a==j-b and cond1(i-a) ) maze[i-p][j-r] = '#';
        if(i-a==b-j and cond2(i-a) ) maze[i-p][j-r] = '#';
    }
    rep(i,q-p+1) cout << maze[i] <<endl;
    return 0;
}