#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    string x;
    cin >> x;
    string ans = "";
    for( char c : x ){
        if(c=='.') break;
        ans += c;
    }
    cout << ans << endl;
    return 0;
}