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
    int n,g;
    cin >> n;
    vector<P> x(n);
    rep(i,n) cin >> x[i].first >> x[i].second;
    set<P> s;
    rep(i,n)rep(j,n)if(i!=j){
        P p = make_pair(x[i].first-x[j].first,x[i].second-x[j].second);
        if(p.first==0) p.second /= abs(p.second);
        else if(p.second==0) p.first /= abs(p.first);
        else{
            g = gcd(abs(p.first),abs(p.second));
            p.first/=g; p.second/=g;
        }
        s.insert(p);
    }
    cout << s.size() << endl;
    return 0;  
}