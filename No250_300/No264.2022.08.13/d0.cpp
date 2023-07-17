#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int main(){
    string s,s_ref="atcoder";
    cin >> s;
    vector<int> pos(7),v(7),d(7);
    rep(i,7)rep(j,7)if(s[i]==s_ref[j]){
        v[i]=j;
        pos[j] = i;
        d[j]=j-i;
    }
    int ans = 0;
    rep(i,7)if(d[i]!=0){
        ans += abs(d[i]);
        rep2(j,i,i+d[i])if(v[j]>i+d[i]) ++d[j];
        cout << i << " " << i+d[i] << endl;
        rep(k,7) cout << d[k] << " ";
        cout << endl;
    }
    cout << ans << endl;
    return 0;
}