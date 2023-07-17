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
    vector<string> s(n),t(m);
    rep(i,n) cin >> s[i];
    rep(i,m) cin >> t[i];
    int pos=0;
    rep(i,n){
        if(s[i]==t[pos]){
            cout << "Yes" << endl;
            ++pos;
        }
        else cout << "No" << endl;
    }
    return 0;
}