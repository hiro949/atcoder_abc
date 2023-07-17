#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
// count 0,0.5,1,...,N in sec[i]

struct sec{
    int t,l,r;
};

bool ok( sec s1, sec s2 ){
    if(s1.r<s2.l or s2.r<s1.l) return false;
    if(s1.r==s2.l)if( s1.t==2 or s1.t==4 or s2.t==3 or s2.t==4 ) return false;
    if(s2.r==s1.l)if( s2.t==2 or s2.t==4 or s1.t==3 or s1.t==4 ) return false;
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<sec> a(n);
    rep(i,n) cin >> a[i].t >> a[i].l >> a[i].r;
    int ans = 0;
    rep(i,n)for(int j=i+1; j<n; ++j ){
        if(ok(a[i],a[j])) ++ans;
    }
    cout << ans << endl;
    return 0;
}
