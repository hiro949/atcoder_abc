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
    int x[4],y[4];
    rep(i,3) cin >> x[i] >> y[i];
    rep(i,3)rep(j,i)rep(k,3)if(k!=i and k!= j){
        if( x[i]==x[j] ){
            x[3]=x[k];
        }
        if( y[i]==y[j] ){
            y[3]=y[k];
        }
    }
    cout << x[3] << " " << y[3] << endl;
    return 0;
}