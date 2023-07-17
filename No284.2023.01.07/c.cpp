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
    int n,m;
    cin >> n >> m;
    dsu d(n);
    int a,b;
    for( int i=0; i<m; ++i ){
        cin >> a >> b; --a; --b;
        d.merge(a,b);
    }
    set<int> s;
    for( auto g : d.groups() ) s.insert(d.leader(g[0]));
    cout << s.size() << endl;
    return 0;
}