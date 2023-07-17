#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> h(n), w(m);
    rep(i,n) cin >> h[i];
    rep(i,m) cin >> w[i];
    