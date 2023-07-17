#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
// n=110110
//=>ABABBABABB
int main(){
    ll n,x;
    cin >> n; x=n;
    string s = "",ans="";
    while(x>0){
        if(x%2==1) s +="1";
        else s +="0";
        x/=2;
    }
    reverse(s.begin(),s.end());
    for( char c : s ){
        if(c=='1') ans += "AB";
        else ans += "B";
    }
    if( ans[ans.length()-1]=='B' ) ans = ans.substr(0, ans.length() - 1);
    cout << ans << endl;
    return 0;
}