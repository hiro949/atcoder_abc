#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    ll x,y; int a,b;
    cin >> x >> y >> a >> b;
    ll na = 0,xa=0;
    if(x<b){
        na = ll(log(b/x)/log(a));
        xa = pow(a,na)*x;
    }
    if(xa*a<= xa+b ){ 
        ++na;
        xa *=a;
    }
    ll nb = (y-xa)/b;
    cout << na+nb << endl;
    return 0;
}
        

