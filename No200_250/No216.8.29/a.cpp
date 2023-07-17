#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    double xy;
    cin >>xy;
    int x = xy, y = 10*(xy-x);
     string s = to_string(x);
     if(y<=2) s += "-";
     else if(y>=7) s+="+";
     cout << s << endl;
     return 0;
 }
