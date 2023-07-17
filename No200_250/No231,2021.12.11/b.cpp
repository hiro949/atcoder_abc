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
    int n;
    cin >> n;
    map<string,int> m;
    string s;
    rep(i,n){
        cin >> s;
        ++m[s];
    }
    int cnt = 0;
    for( auto p : m)if(cnt<p.second){
        cnt = p.second; s = p.first;
    //    cout << cnt << " " << s << endl;
    }
    cout<< s << endl;
    return 0;
}