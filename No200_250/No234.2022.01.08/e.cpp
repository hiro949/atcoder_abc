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
// if k<=10 98765.. is possible
// k>10 repeat same num (ex:1111...1)

ll rec_num( int d0, int dif, int n ){
    ll ans = 0;
    ll x=1;
    rep(i,n-1) x*=10;
    rep(i,n){
        ans += (d0+i*dif)*x;
        x/=10;
    }
    return ans;
}

int main(){
    ll x;
    cin >> x;
    vector<int> d;
    while(x>0){
        d.push_back(x%10);
        x/=10;
    }
    reverse(d.begin(),d.end());
    int n=d.size();
    int dmax = 0;
    rep(i,n) dmax = max(dmax,d[i]);
    ll ans = rec_num(dmax,0,n);
    for(int d0=d[0]; d0<10; ++d0 ){
        for( int x=-9; x<10; ++x ){
            bool tf=true;
            int u;
            rep(i,n){
                u = d0+i*x;
                if( u> d[i]) break;
                else if( u < d[i] ){ tf=false; break;}
                else if(u<0 or u>=10){ tf=false; break; }
            }
            u = d0 + (n-1)*x;
            if(u<0 or 9<u) tf=false;
            if(tf){
                ans = min(ans,rec_num(d0,x,n));
            }
        }        
    }
    cout << ans << endl;
    return 0;
}