#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int main(){
    string s;
    cin >> s;
    int n= s.length();
    if(s.substr(n-2,n)=="er") cout << "er" << endl;
    else cout << "ist" << endl;
    return 0;
}