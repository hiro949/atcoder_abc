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
    vector<int> p(n),x(n);
    rep(i,n){
        int a;
        cin >> a >> p[i] >> x[i];
        x[i] = max(x[i]-a,0);
    }
    int ans = 1e9;
    rep(i,n){
        if(x[i]>0) ans = min(ans,p[i]);
    }
    if(ans == 1e9) ans = -1;
    cout << ans << endl;
    return 0;
}