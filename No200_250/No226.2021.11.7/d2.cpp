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

struct frac{
    ll a,b;
    frac( ll _a=0, ll _b=1 ): a(_a),b(_b){
        if(b==0){ a=1; return; }
        if(b<0){ a=-a; b=-b; }
        ll g=gcd(abs(a),b);
        a/=g; b/=g;
    }
    // set need comparator
    bool operator<( const frac x ) const{
        return  a*x.b<x.a*b;
    }
};

int main(){
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i,n) cin >> x[i] >> y[i];
    set<frac> s;
    rep(i,n)rep(j,i) s.insert( frac(x[i]-x[j],y[i]-y[j]) );
    cout << s.size() << endl;
    return 0;
}