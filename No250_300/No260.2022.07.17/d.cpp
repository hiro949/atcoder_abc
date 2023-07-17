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
    int n,k;
    cin >> n >> k;
    vector<int> p(n);
    rep(i,n) cin >> p[i], --p[i];
    set<int> s;
    vector<int> ans(n,-2), cnt(n,0),par(n,-1);
    rep(i,n){
        decltype(s)::iterator it = s.lower_bound(p[i]);
        if(it == s.end()){
            s.insert(p[i]);
            ++cnt[p[i]];
        }else{
            int x = *it;
            cnt[p[i]] = cnt[x]+1;
            par[p[i]] = x;
            s.erase(x); s.insert(p[i]);
        }
        if(cnt[p[i]]==k){
            s.erase(p[i]);
            int ir = p[i];
            while(ir!=-1){
                ans[ir]=i;
                ir = par[ir];
            }
        }
    }
    /*
    rep(i,n) cout << cnt[i] << " ";
    cout << endl;
    rep(i,n) cout << par[i] << " ";
    cout << endl;
    */
    rep(i,n) cout << ans[i]+1 << " ";
    cout << endl;
    return 0;
}