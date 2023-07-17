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

vector<ll> spf;

void init() {
    ll N = inf;
    spf.assign(N + 1, 0);
    for (ll i = 0; i <= N; i++) spf[i] = i;
    for (ll i = 2; i * i <= N; i++) {
        if (spf[i] == i) {
            for (ll j = i * i; j <= N; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

int main(){
    init();
    int T;
    cin >> T;
    rep(it,T){
        ll n;
        cin >> n;
        ll p = spf[];
        cout << p << " " << n/p/p << endl;
    }
    return 0;
}