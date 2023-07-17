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
    int x,y;
    for( int i=0; i<m; ++i ){
        cin >> x >> y; --x; --y;
        d.merge(x,y);
    }
    int k;
    cin >> k;
    vector<set<int>> forbitten(n,set<int>());
    int xroot,yroot;
    rep(i,k){
        cin >> x >> y; --x; --y;
        xroot = d.leader(x);
        yroot = d.leader(y);
        forbitten[xroot].insert(yroot);
        forbitten[yroot].insert(xroot);
    }
    int Q;
    cin >> Q;
    rep(i,Q){
        cin >> x >> y; --x; --y;
        xroot = d.leader(x);
        yroot = d.leader(y);
        if(forbitten[xroot].count(yroot)==0){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
    return 0;
}
