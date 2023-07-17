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
    string s;
    int a,b;
    cin >> s >> a >> b; --a; --b;
    char ca=s[a], cb=s[b];
    s[a]=cb;s[b]=ca;
    cout << s << endl;
    return 0;
}