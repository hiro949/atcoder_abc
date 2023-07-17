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

string s1 = "HDCS";
string s2 = "A23456789TJQK";

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n){
        cin >> s[i];
        bool tf=false;
        for( char c: s1 )if(s[i][0]==c) tf=true;
        if(!tf){
            cout << "No" << endl;
            return 0;
        }
        tf=false;
        for( char c: s2 )if(s[i][1]==c) tf=true;
        if(!tf){
            cout << "No" << endl;
            return 0;
        }
    }
    rep(i,n)rep(j,i)if(s[i]==s[j]){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;   
    return 0;
}