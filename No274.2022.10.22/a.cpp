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
    int a,b;
    cin >> a >> b;
    string s = to_string(b/a);
    s += ".";
    b %=a;
    rep(i,2){
        b *= 10;
        s += to_string(b/a);
        b%=a;
    }
    b *= 10;
    int last=b/a;
    b%=a;
    b *= 10;
    if(b/a>4) ++last;
    s+=to_string(last);
    cout << s << endl;
    return 0;
}