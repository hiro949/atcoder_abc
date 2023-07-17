#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<ll,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<P> a2(2*n);
    rep(i,n) cin >> a[i],a2[i].first=a[i], a2[i].second=i;
    rep(i,n) a2[n+i].first=a[(i-1+n)%n]+a[(i+1)%n], a2[n+i].second=n+i;
    rep(i,2*n) a2[i].second *=-1;
    sort(a2.begin(),a2.end());
    rep(i,2*n) a2[i].second *=-1;
    vector<bool> used(n,false);
    auto update = [&]( int i ){
        if(used[(i+2)%n]) used[(i+1)%n]=true;
        if(used[(i-2+n)%n]) used[(i-1+n)%n]=true;
        return;
    };
    for( P p : a2 ){
        ll c=p.first; int i=p.second;
        if(i<n){
            if(used[i]) continue;
            used[i]=true;
            update(i);
        }else{
            int ii=i%n, ip=(i-1+n)%n,in=(i+1)%n;
            if(used[ii]) continue;
            if(!used[ip]){
                used[ip] = true;
                update(ip);
            }
            if(!used[in]){
                used[in] = true;
                update(in);
            }
            used[ii]=true;
        }
    }
    for( int i= 2*n-1; i>=0; --i ){
        int id=a2[i].second;
        if(id >=n) continue;
        if(used[(id+1)%n] and used[(id-1+n)%n]) used[id]=false;
    }
    ll ans = 0;
    rep(i,n)if(used[i]) ans += a[i];
    cout << ans << endl;
    return 0;
}