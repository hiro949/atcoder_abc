#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int main(){
    string s;
    set<string> set;
    cin >> s;
    set.insert(s);
    rep(i,s.length()){
        rotate(s.begin(),s.begin()+1,s.end());
        set.insert(s);
    }
    cout << *set.begin() << endl;
    cout << *set.rbegin() << endl;
    return 0;
}