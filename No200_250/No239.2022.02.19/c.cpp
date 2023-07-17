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

//condition: 2(x2-x1)x + 2(y2-y1)y = x1^2-x2^2 + y1^2 -y2^2

int main(){
    ll x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ll dx[2] = {1,2},dy[2] = {2,1},s[2]={1,-1};
    rep(i,2)rep(j,2){
        rep(i1,2)rep(i2,2)if(x1+s[i1]*dx[i]==x2+s[i2]*dx[j]){
            rep(i3,2)rep(i4,2)if(y1+s[i3]*dy[i]==y2+s[i4]*dy[j]){
                cout << "Yes" << endl;
                return 0;
            }            
        }
    }
    cout << "No"<< endl;
    return 0;
    }