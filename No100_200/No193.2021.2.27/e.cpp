#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace atcoder;
using namespace std;
using ll = long long;
using P = pair<int,int>;

int min_time( int x, int y, int p, int q){
    int t1 = 2*x+2*y, t2 = p+q;
    int i0=0,i1=INT64_MAX;
    while(i1-i0>1){
        int piv=(i1-i0)/2;
        if( piv*(t1-t2)<p+q-x and piv*(t1-t2)>p-x-y) i1=piv;
        else i0=piv;
    }
    if(i1 == INT64_MAX) return -1;
    return i1;
}

int main(){
    int n;
    cin >> n;
    vector<int> x(n),y(n),p(n),q(n);
    rep(i,n) cin >> x[i] >> y[i] >> p[i] >> q[i];
    rep(i,n){
        int ans = min_time(x[i],y[i],p[i],q[i]);
        if(ans == -1) cout << "infinity" << endl;
        else cout << ans << endl;
    }
    return 0;
}