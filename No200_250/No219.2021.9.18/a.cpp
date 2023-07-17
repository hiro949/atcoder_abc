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
    int x,ans;
    cin >> x;
    if(x<40) ans = 40-x;
    else if(x<70) ans = 70-x;
    else if(x<90) ans = 90-x;
    else{
        cout << "expert" << endl;
        return 0;
    }
    cout << ans << endl;
    return 0;
}