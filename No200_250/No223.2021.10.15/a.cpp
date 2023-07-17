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
    int x;
    cin >> x;
    if(x%100!=0 or x==0) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}