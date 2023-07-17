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
    int y;
    cin >> y;
    int y4 = y%4;
    if(y4==0) y += 2;
    if(y4==1) y+=1;
    if(y4==3) y+=3;
    cout << y << endl;
    return 0;
}
