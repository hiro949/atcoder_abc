#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n;
    string s = to_string(n), s2;
    int cnt0 = 0;
    rep(i,s.length()){
        if(s[s.length()-1-i]=='0') ++cnt0;
        else break;
    }
    s = string(cnt0,'0') + s;
    s2 = s;
    reverse(s2.begin(),s2.end());
    if(s==s2) cout << "Yes" <<endl;
    else cout << "No" << endl;
    return 0;
}
