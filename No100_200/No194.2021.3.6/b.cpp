#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    rep(i,n){
        cin >> a[i] >> b[i];
    }
    int x = 1e6;
    rep(i,n)rep(j,n){
        if(i!=j) x = min( x, max(a[i],b[j]) );
        else x = min(x,a[i]+b[i]);
    }
    cout << x << endl;
    return 0;
}