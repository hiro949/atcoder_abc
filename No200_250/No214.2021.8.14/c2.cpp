#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
// cut 1 edge => repeat for 2 loop

int main(){
    int n;
    cin >> n;
    vector<int> s(n),t(n),flag(n,inf);
    rep(i,n) cin >> s[i];
    rep(i,n) cin >> t[i];
    rep(i,2*n){
        t[(i+1)%n] = min( t[(i+1)%n], t[i%n] + s[i%n] );
    }
    rep(i,n) cout << t[i] << endl;
    return 0;
}
