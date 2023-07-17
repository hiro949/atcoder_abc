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
    int n;
    ll sx,sy,tx,ty;
    cin >> n >> sx >> sy >> tx >> ty;
    vector<ll> x(n),y(n),r(n);
    rep(i,n) cin >> x[i] >> y[i] >> r[i];
    int is,it;
    rep(i,n){
        ll ws = (x[i]-sx)*(x[i]-sx) + (y[i]-sy)*(y[i]-sy) - r[i]*r[i];
        ll wt = (x[i]-tx)*(x[i]-tx) + (y[i]-ty)*(y[i]-ty) - r[i]*r[i];
        if(ws==0) is = i;
        if(wt==0) it = i;
    }
    dsu d(n);
    rep(i,n)rep(j,i){
        ll w = (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]);
        if( w>=(r[i]-r[j])*(r[i]-r[j]) and w<=(r[i]+r[j])*(r[i]+r[j]) ){
            d.merge(i,j);
        }
    }
    if(d.same(is,it)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
