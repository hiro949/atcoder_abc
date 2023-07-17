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
    vector<int> v(5),cnt(13,0);
    rep(i,5) cin >> v[i];
    rep(i,5) ++cnt[v[i]-1];
    bool OK1=false,OK2=false;
    rep(i,13){
        if(cnt[i]==3) OK1=true;
        if(cnt[i]==2) OK2=true;
    }
    if(OK1 and OK2) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}