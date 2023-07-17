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
    vector<P> sec(n);
    rep(i,n) cin >> sec[i].first >> sec[i].second;
    sort(sec.begin(),sec.end());
    vector<P> ans;
    P p=sec[0];
    sec.emplace_back(inf,inf);
    for( int i=1; i<=n; ++i ){
        if(p.second>sec[i].second) continue;
        else if(p.second>=sec[i].first) p = make_pair(p.first,sec[i].second);
        else {
            ans.push_back(p);
            p = sec[i];
        }
    }
    for( P p : ans ){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}