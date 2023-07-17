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
    int q,t,x,c;
    cin >> q;
    map<int,int> mp;
    set<int> s;
    rep(iq,q){
        cin >> t;
        if(t==1){
            cin >> x;
            ++mp[x];
            s.insert(x);
        }
        if(t==2){
            cin >> x >> c;
            mp[x] = max(0,mp[x]-c);
            if(mp[x]==0) s.erase(x);
        }
        if(t==3){
            int amax = *(s.rbegin());
            int amin = *(s.begin());
            cout << amax-amin << endl;
        }
    }
    return 0;
}