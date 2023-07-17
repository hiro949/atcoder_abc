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
    ll n;
    cin >> n;
    ll x=1,p=0;
    while(x<n*n){
        x*=2;
        ++p;
    }
    if(p<n) cout << "Yes" << endl;
    else if(p==n and x>n*n) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}