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
    int n,l,x;
    cin >> n;
    vector<vector<int>> a( n ,vector<int>() );
    set<vector<int>> s;
    rep(i,n){
        cin >> l;
        rep(j,l){
            cin >> x;
            a[i].push_back(x);
        }
        s.insert(a[i]);
    }
    cout << s.size() << endl;
    return 0;
}
