#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int dig( string s ){
    int ans = 0;
    for( char c : s ){
        ans += c - '0';
    }
    return ans;
}

int main(){
    string a,b;
    cin >> a >> b;
    cout << max(dig(a),dig(b)) << endl;
    return 0;
}