#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

char rot( char c){
    if(c=='9') return '6';
    if(c=='6') return '9';
    return c;
}

int main(){
    string s;
    cin >> s;
    rep(i,s.length()){
        s[i] = rot(s[i]);
    }
    reverse(s.begin(),s.end());
    cout << s << endl;
    return 0;
}
