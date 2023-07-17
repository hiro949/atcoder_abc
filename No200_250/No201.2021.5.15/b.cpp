#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<string,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int n;
    cin >> n;
    vector<P> s(n);
    rep(i,n) cin >> s[i].first >> s[i].second;
    sort(s.begin(),s.end(),[](P p1, P p2){
        return p1.second > p2.second;
    });
    cout << s[1].first << endl;
    return 0;
}