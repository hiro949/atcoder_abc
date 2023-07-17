#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint998244353;
const int inf = numeric_limits<int>::max()/2;
// bisec-tree
//     1
//   2  3
// 4 5 | 6 7
//     :

int main(){
    int n,d;
    cin >> n >> d;
    if(2*(n-1)<d){
        cout << 0 << endl;
        return 0;
    }

}