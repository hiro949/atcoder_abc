#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

bool OK( ll d, string x, ll m ){
    ll v = 0;
    for( char c : x ){
        if(v>m/d) return false;
        (v*=d) += (c-'0');
    }
    return v<=m;
}

int main(){
    string x;
    ll m;
    cin >> x >> m;
    if(x.size()==1){
        cout << ((x[0]-'0')<=m) << endl;
        return 0;
    }
    int d0 = 1;
    for( char c : x ) d0 = max(d0,c-'0');
    ll i0=d0,i1=m+1;
    while(i1-i0>1){
        ll piv = (i1+i0)/2;
        if(OK(piv,x,m)) i0 = piv;
        else i1 = piv;
    }
    cout << i0-d0 << endl;
    return 0;
}
