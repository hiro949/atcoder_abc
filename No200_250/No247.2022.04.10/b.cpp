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
    vector<string> s(n),t(n);
    rep(i,n) cin >> s[i] >> t[i];
    map<string,int> mp;
    rep(i,n){
        ++mp[s[i]];
        if(s[i] != t[i]) ++mp[t[i]];
    }
    rep(i,n){
        if(mp[s[i]]>1 and mp[t[i]]>1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
