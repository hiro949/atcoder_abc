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
    ll a = 2*(x2-x1), b=2*(y1-y2), c= x1*x1-x2*x2 + y1*y1-y2*y2;
    auto f = [a,b,c](ll x,ll y){ return a*x+b*y-c; };
    ll dx[4] = {-1,-2,1,2},dy[4] = {-2,-1,2,1};
    rep(i,4){
        if(f(x1+dx[i],y1+dy[i])==0){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No"<< endl;
    return 0;
    }