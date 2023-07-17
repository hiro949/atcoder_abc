#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

struct P{
    int s,d;
    P(int s=0, int d=0): s(s),d(d) {}
};

P op (P a, P b){
    return P(a.s+b.s, min(a.d,a.s+b.d));
}
P e(){ return P(0,0); };

int main(){
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    segtree<P,op,e> t(n);
    auto f = [&](char c){ return (c=='(') ? P(1,0) : P(-1,-1); };
    rep(i,n) t.set(i,f(s[i]));
    rep(qi,q){
        int type, l ,r;
        cin >> type >> l >> r;
        --l;--r;
        if(type==1){
            swap(s[l],s[r]);
            t.set(l,f(s[l])); t.set(r,f(s[r]));
        }else{
            P p =t.prod(l,r);
            if(p.s==0 and p.d==0) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}