#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

P op1( P r ){ return make_pair(-r.second,r.first); }
P op2( P r ){ return make_pair(r.second,-r.first); }
P op3( P r, int p ){ return make_pair(2*p-r.first,r.second); }
P op4( P r, int p ){ return make_pair(r.first,2*p-r.second); }

int main(){
    int n,m,q;
    cin >> n;
    vector<P> r(n);
    rep(i,n) cin >> r[i].first >> r[i].second;
    cin >> m;
    vector<P> op(m);
    rep(i,m){
        cin >> op[i].first;
        if( op[i].first == 3 or op[i].first == 4 ) cin >> op[i].second;
    }
    cin >> q;
    vector<int> a(q),b(q);
    rep(i,q){
        cin >> a[i] >> b[i]; --a[i]; --b[i];
        rep(j,n){
            if( op[a[i]].first == 1 ) r[j] = op1(r[j]);
            else if( op[a[i]].first == 2 ) r[j] = op2(r[j]);
            else if( op[a[i]].first == 3 ) r[j] = op3( r[j], op[a[i]].second );
            else r[j] = op4( r[j], op[a[i]].second );
        }
        cout << r[b[i]].first << " " << r[b[i]].second << endl;
    }
    return 0;
}



    