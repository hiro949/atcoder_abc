#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int x,y;
    cin >> x >> y;
    cout << ((3-(x+y))%3+3)%3 << endl;
    return 0;
}
