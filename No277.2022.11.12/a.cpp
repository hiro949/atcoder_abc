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
    int n,x,p;
    cin >> n >> x;
    rep(i,n){
        cin >> p;
        if(p==x){
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}