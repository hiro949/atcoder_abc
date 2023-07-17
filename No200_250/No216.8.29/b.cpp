#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int n;
    cin >> n;
    vector<string> s(n),t(n);
    rep(i,n) cin >> s[i] >> t[i];
    rep(i,n)rep(j,n){
        if(i==j) continue;
        if( s[i]==s[j] and t[i] == t[j] ){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}