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
    char s[3],t[3];
    cin >> s[0] >> s[1] >> s[2];
    cin >> t[0] >> t[1] >> t[2];
    vector<int> p(3);
    rep(i,3)rep(j,3) if(s[i]==t[j]) p[i]=j;
    int diag=0;
    rep(i,3)if(p[i]==i) ++diag;
    if(diag==1) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}