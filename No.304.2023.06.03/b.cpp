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
    cin >> s;
    if(s.length()<4){
        cout << s << endl;
        return 0;
    }
    for( int i=3; i<s.length(); ++i ) s[i] = '0';
    cout << s << endl;
    return 0;
}