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
    ll k;
    cin >> k;
    string ans="";
    while(k>0){
        if(k%2==1) ans+="2";
        else ans += "0";
        k /=2;
    }
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
    return 0;
}