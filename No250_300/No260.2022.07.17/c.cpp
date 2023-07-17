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

vector<ll> red(10,0),blue(10,0);   

int main(){
    int n;
    ll x,y;
    cin >> n >> x >> y; --n;
    ++red[n];
    while(n>0){
        if(red[n]>0){
            red[n-1] += red[n];
            blue[n] += x*red[n];
        }
        if(blue[n]>0){
            red[n-1] += blue[n];
            blue[n-1] += y*blue[n];
        }
        --n;
    }
    cout << blue[0] << endl;
    return 0;
}