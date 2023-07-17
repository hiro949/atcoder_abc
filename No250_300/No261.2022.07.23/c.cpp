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
    string s;
    map<string,int> cnt;
    rep(i,n){
        cin >> s;
        if(cnt[s]==0){
            cout << s << endl;
        }else{
            cout << s + "(" + to_string(cnt[s]) + ")" << endl;
        }
        ++cnt[s];
    }
    return 0;
}