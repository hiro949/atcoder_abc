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
    int n,q;
    cin >> n >> q;
    map<int,vector<int>> mp;
    int a;
    rep(i,n) cin >> a, mp[a].push_back(i);
    int x,k;
    rep(iq,q){
        cin >> x >> k;
        bool ok=true;
        if(mp.count(x)==0) ok=false;
        else if(mp[x].size()<k) ok=false;
        if(ok) cout << mp[x][k-1]+1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}