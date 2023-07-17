#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

bool OK( int d, string x, ll m ){
    ll tmp;
    vector<int> vec(0);
    if(d==1){
        tmp = 0;    
        for( char c : x ) tmp += c-'0';
        return tmp<=m;
    }
    tmp = m;
    while(tmp>0){
        vec.push_back(tmp%d);
        tmp/=d;     
    }
    reverse(vec.begin(),vec.end());
    if(x.size()<vec.size()) return true;
    if(x.size()>vec.size()) return false;
    rep(i,x.size()){
        if( (x[i]-'0')<vec[i] ) return true;
        if( (x[i]-'0')>vec[i] ) return false;
    }
    return true;
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
    int i0=d0,i1=m+1;
    while(i1-i0>1){
        int piv = (i1+i0)/2;
        if(OK(piv,x,m)) i0 = piv;
        else i1 = piv;
    }
    cout << i0-d0 << endl;
    return 0;
}
