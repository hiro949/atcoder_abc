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
// A[i]>A[j] and B[i]<B[j]
// <=> A[i]>A[j] and -B[i]>-B[j] <=>: (A[i],B[i])>(A[j],B[j])
// planar scan for (A[i],B[i])
// => fenwick tree

int main(){
    int n;
    cin >> n;
    vector<int> A(n),B(n);
    rep(i,n) cin >> A[i];
    rep(i,n) cin >> B[i];
    map<int,int> mp; // (A[i],B[i]) <- ascending-sorted
    map<int,vector<int>> d; // list of -B w.r.t same A
    rep(i,n){
        int a = A[i], b = -B[i];
        d[a].push_back(b);
        mp[b]=0;
    }
    int i=0;
    for( auto && p : mp ) p.second = ++i; // number labeling
    int m = mp.size();
    fenwick_tree<int> t(m);
    ll ans = 0;
    for( auto [_,bs] : d ){
        //make set of # of B with same A
        for( int b : bs ) t.add(mp[b],1);
        // count P' s.t. P'<P forall P
        for( int b : bs ) ans += t.sum(0,mp[b]+1);
    }
    cout << ans << endl;
    return 0;
}
