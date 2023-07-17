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
    ll x,a,d,n;
    cin >> x >> a >> d >> n;
    x -=a;
    if(d<0){
        d = -d; x = -x;
    }
    if(d==0 or x<=0){
        cout << abs(x) << endl;
        return 0;
    }
    if(x/d<n){
        cout << min(x%d,d-x%d) << endl;
        return 0;
    }
    cout << x-(n-1)*d << endl;
    return 0;
}