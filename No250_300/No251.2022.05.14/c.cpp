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
    int t;
    map<string,int> mp;
    int high = 0, ans = 0;
    rep(i,n){
        cin >> s >> t;
        if(mp.find(s) == mp.end()){
            if(t>high){
                high=t; ans = i;
            }
        }
        ++mp[s];
    }
    cout << ans+1 << endl;
    return 0;
}