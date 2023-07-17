#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;
// xi,yi => t/f;
// Only y[i] = True and x[i+1]=True is OK;
// if x[i+1]=True, any sequence is OK
// if x[i+1]=False, y[i] = True is OK
              

int main(){
    int n;
    cin >> n;
    ll ans=1; // y[i]= True partern
    rep(i,n){
        string s; cin >> s;
        if(s=="OR") ans += (1LL<<(i+1));
    }
    cout << ans << endl;
    return 0;
}