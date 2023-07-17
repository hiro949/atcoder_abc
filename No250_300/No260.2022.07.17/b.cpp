#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using PP = pair<P,P>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int main(){
    int n,x,y,z;
    cin >> n >> x >> y >> z;
    vector<PP> v(n);
    rep(i,n) cin >> v[i].first.first;
    rep(i,n) cin >> v[i].second.first;
    rep(i,n) v[i].second.second = v[i].first.first + v[i].second.first;
    rep(i,n) v[i].first.second = -(i+1);
    
    vector<int> ans;
    sort(v.begin(),v.end(),greater<PP>());
    //rep(i,n) cout << v[i].first.first << " " << v[i].first.second << " " << v[i].second.first << " " << v[i].second.second << endl;
    rep(i,x) ans.push_back(v[i].first.second);
    rep(i,n) swap(v[i].first.first,v[i].second.first);
    sort(v.begin()+x,v.end(),greater<PP>());
    rep2(i,x,x+y) ans.push_back(v[i].first.second);
    rep(i,n) swap(v[i].first.first,v[i].second.second);
    sort(v.begin()+x+y,v.end(),greater<PP>());
    rep2(i,x+y,x+y+z) ans.push_back(v[i].first.second);
    sort(ans.begin(),ans.end(),greater<int>());
    for( int i : ans ) cout << -i << endl;
    return 0;
}