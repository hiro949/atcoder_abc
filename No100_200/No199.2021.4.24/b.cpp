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
    int l = 0, r=numeric_limits<int>::max();
    rep(i,n){
        int a;
        cin >> a;
        l = max(l,a);
    }
    rep(i,n){
        int b;
        cin >> b;
        r = min(r,b);
    }
    cout << max(r-l+1,0) << endl;
    return 0;
}