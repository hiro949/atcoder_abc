#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    vector<vector<int>> route(n,vector<int>(0));
    rep(i,n) cin >> a[i];
    rep(i,m){
        int xi,yi;
        cin >> xi >> yi;
        --xi;--yi;
        route[xi].push_back(yi);
    }
    int rate = 0;
    int is = 0,ig = 0;
    rep(i,n){
        if(a[is]>a[i]) is=i;
        if(a[ig]<a[i]) ig=i;
    }
    route
    return 0;
}