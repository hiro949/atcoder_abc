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
    vector<int> deg(n,0);
    rep(i,m){
        cin >> a >> b; --a; --b;
        if(d.same(a,b)){
            cout << "No" << endl;
            return 0;
        }
        d.merge(a,b);
        ++deg[a]; ++deg[b];
    }
    rep(i,n)if(deg[i]>2){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}
