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
    vector<P> path(n);
    set<int> s;
    rep(i,n){
        cin >> path[i].first >> path[i].second;
        s.insert(path[i].first); s.insert(path[i].second);
    }
    vector<int> floor;
    for(int x : s) floor.push_back(x);
    if(floor[0]>1){
        cout << 1 << endl;
        return 0;
    }
    dsu d(s.size());
    for( P p : path){
        int i = lower_bound(floor.begin(),floor.end(),p.first) - floor.begin();
        int j = lower_bound(floor.begin(),floor.end(),p.second) - floor.begin();
        d.merge(i,j);
    }
    int imax = 0;
    rep(i,s.size())if(d.same(i,0)) imax = i;
    cout << floor[imax] << endl;
    return 0;
}