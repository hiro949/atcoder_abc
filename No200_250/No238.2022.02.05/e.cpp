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
    int n,q;
    cin >> n >> q;
    dsu d(n+1);
    int l,r;
    for( int i=0; i<q; ++i ){
        cin >> l >> r; --l; r;
        d.merge(l,r); // return d.leader(a) (=d.leader(b))
    }
    if(d.same(0,n)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}