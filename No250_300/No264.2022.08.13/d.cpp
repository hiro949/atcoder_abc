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
    vector<int> pos(7);
    rep(i,7)rep(j,7)if(s[i]==s_ref[j]){
        pos[j] = i;
    }
    int ans = 0;
    rep(i,7)rep(j,i)if(pos[i]<pos[j]) ++ ans;
    cout << ans << endl;
    return 0;
}