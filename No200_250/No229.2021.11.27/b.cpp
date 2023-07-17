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
    ll a,b;
    cin >> a >> b;
    ll x = 10;
    while(a>0 and b>0){
        if(a%10 + b%10 > 9){
            cout << "Hard" <<endl;
            return 0;
        }
        a/=10; b/=10;
    }
    cout << "Easy" << endl;
    return 0;
}