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
    string s,t;
    cin >> s >> t;
    if(s==t){
        cout << "Yes" << endl;
        return 0;
    }
    if(s.length()>=t.length() or s[0]!=t[0]){
        cout << "No" << endl;
        return 0;
    }
    int j=0;
    for( int i=0; i<s.length()-1; ++i ){
        if(s[i]==t[j]) ++j, continue;
        if(s.length()>t.length()){
            cout << "No" << endl;
            return 0;           
        }
        if(s[i]==s[i-1] and s[i]==t[j])
    }
    return 0;
}