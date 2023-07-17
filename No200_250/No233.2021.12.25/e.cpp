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
    string s;
    cin >> s;
    int n=s.size(),w=0;
    rep(i,n) w+=s[i]-'0';
    int x=0;
    string ans;
    //update from lowest digit
    for( int i=n-1; i>=0; --i ){
        x+=w;
        w -= s[i]-'0';
        ans += '0'+(x%10);
        x/=10;
    }
    //rest part
    while(x){
        ans+='0'+(x%10);
        x/=10;
    }
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
    return 0;
}