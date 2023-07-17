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
    int w,h,n;
    cin >> w >> h >> n;
    vector<P> r(n);
    rep(i,n) cin >> r[i].first >> r[i].second;
    int A,B;
    cin >> A;
    vector<int> a(A);
    rep(i,A) cin >> a[i];
    cin >> B;
    vector<int> b(B);
    rep(i,B) cin >> b[i];
    map<P,int> mp;
    rep(i,n){
        int x = lower_bound(a.begin(),a.end(),r[i].first) - a.begin();
        int y = lower_bound(b.begin(),b.end(),r[i].second) - b.begin();
        ++mp[make_pair(x,y)];
    }
    int nmax = 0, nmin = inf;
    int np = 0;
    for (const auto &item : mp) {
        nmax = max(nmax,item.second);
        nmin = min(nmin,item.second);
    }
    if(mp.size()<(A+1)*(B+1)) nmin=0;
    cout << nmin << " " << nmax << endl;
    return 0;
}