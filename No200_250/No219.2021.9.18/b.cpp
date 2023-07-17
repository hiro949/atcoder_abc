#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max();

int main(){
    string s1,s2,s3,t,ans="";
    cin >> s1 >> s2 >> s3 >> t;
    for( char c : t ){
        if(c-'0'==1) ans += s1;
        if(c-'0'==2) ans += s2;
        if(c-'0'==3) ans += s3;
    }
    cout << ans << endl;
    return 0;
}