#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    string s;
    cin >> s;
    rotate(s.begin(),s.begin()+1,s.end());
    cout << s << endl;
    return 0;
}
