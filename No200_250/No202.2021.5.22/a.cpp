#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    a = 7-a; b = 7-b; c = 7-c;
    cout << a + b + c << endl;
    return 0;
}
