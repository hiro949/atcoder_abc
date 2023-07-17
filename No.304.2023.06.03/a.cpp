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
    vector<string> s(n);
    vector<int> a(n);
    rep(i,n) cin >> s[i] >> a[i];
    int is = 0, amax = inf;
    rep(i,n){
        if(amax>a[i]){
            amax = a[i];
            is = i;
        }
    }
    rep(i,n){
        cout << s[(i+is)%n] << endl;
    }
    return 0;
}