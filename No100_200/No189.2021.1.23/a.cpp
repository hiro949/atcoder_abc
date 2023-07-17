#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    string s;
    cin >> s;
    if( s[0] == s[1] and s[1] == s[2] ) cout << "Won" << endl;
    else cout << "Lost" << endl;
    return 0;
}
