#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max();

int main(){
    string x,abc="",ref('a',26);
    for(char moji='a'; moji<='z'; ++moji) abc += moji;
    int n;
    cin >> x >> n;
    vector<string> s(n);
    vector<pair<string,int>> s2(n);
    rep(i,26){
        ref[int(x[i]-'a')] = abc[i];
    }
    //rep(i,26){ cout << ref[i]; }
    //cout << endl;
    rep(i,n){
        cin >> s[i]; s2[i].first = s[i]; s2[i].second=i;
    }
    rep(i,n)rep(j,s2[i].first.length()) s2[i].first[j] = ref[s2[i].first[j]-'a'];
    sort(s2.begin(),s2.end());
    for( auto p : s2 ){
        cout << s[p.second] << endl;
    }
    return 0;
}