#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<ll,ll>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max();

ll Nmax = 1e8;
ll N3 = 3e6;
set<ll> prime;

void sieve(set<ll> &prime){
    vector<bool> is_p(inf,true);
    is_p[0] = false; is_p[1] = false;
    for( ll  x=2; x*x <=Nmax; ++x )if( is_p[x] ){
        for( ll y=2*x; y<=Nmax; y += x ) is_p[y] = false;
    }
    for( ll p= 0; p<Nmax+1 ; ++p )if( is_p[p] ) prime.insert(p);
    return;
}

P __init__(ll n){
    int cnt = 0;
    for( ll p : prime ){
        if(cnt>N3) break;
        ++cnt;
        if(n%(p*p)==0) return make_pair(p,n/p/p);
        else if(n%p==0) return make_pair(ll(sqrt(n/p)),p);
    }
    return make_pair(1,n);
}

int main(){
    sieve(prime);
    int T;
    cin >> T;
    rep(it,T){
        ll n;
        cin >> n;
        P ans = __init__(n);
        cout << ans.first << " " << ans.second << endl;
    }
    return 0;
}