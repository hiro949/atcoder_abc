#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    ll r,x,y;
    cin >> r >> x >> y;
    ll d2 = x*x + y*y;
    ll ans  = 1;
    while(1){
        if(r*r*ans*ans>=d2) break;
        ++ans;
        if(ans==1){
            if(r*r!=d2) ans = 2;
        }
    }
    cout << ans << endl;
    return 0;
}
