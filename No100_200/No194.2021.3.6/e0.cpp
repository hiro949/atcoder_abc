#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
// [...] s.t. 1,...,x in [...] exist
    
bool OK( int x, int n, int m, vector<int> &a){
    int c=0;
    vector<int> kind(x+1,0);
    rep(i,n){
        if( i>=m and a[i-m]<=x ){
            if(kind[a[i-m]]==0) --c;
            --kind[a[i-m]];
        }
        if( a[i]<=x ){
            if(kind[a[i]]==0) ++c;
            ++kind[a[i]]; 
        }
        if(c<=x) return true;
    }
    return false;
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }
    int ng=-1, ok=n;
    while(ng-ok!=1){
        int piv = (ng+ok)/2;
        if(OK(piv,n,m,a)) ok = piv;
        else ng = piv;
    }
    cout << ok << endl;
    return 0;
}