#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
const int N_MAX = 1e6;
vector<ll> tot(N_MAX),tot_sum(N_MAX+1);
void init(){
    tot[0] = 1;
    for( int i=1; i<N_MAX; ++i ){
        tot[i] = 3*i;
        if(i>2) tot[i] += tot[i-3];
    }
    tot_sum[0] = 0;
    for( int i=1; i<=N_MAX; ++i ) tot_sum[i] = tot_sum[i-1] + tot[i-1];
    return;
}

int main(){
    int n;
    ll k;
    cin >> n >> k;
    init();
    ll rng;
    rep(i,N_MAX){
        if(tot_sum[i]<=k and k<tot_sum[i+1] ){
            rng = i; break;
        }
    }
    ll i_ko = k - tot_sum[rng]; // kirei, oishi
    ll ik = i_ko/n, io = i_ko%n, in = rng - ik-io;
    cout << ++ik << " " << ++io << " " << ++in << endl;
    return 0;
}
