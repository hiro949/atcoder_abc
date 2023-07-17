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

char b='#', w='.';

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    if(s1[0]==w and s2[1]==w or s1[1]==w and s2[0]==w){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}