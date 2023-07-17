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

//|s|<=10, t: period 3, => 5 loops are enough 

int main(){
    int n=1e5;
    string s;
    cin >> s;
    string t = "";
    rep(i,5) t += "oxx";
    if(t.find(s)!=string::npos) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}