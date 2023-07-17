#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    ll N, K;
    cin >> N >> K;
    vector<ll> P(N), C(N);
    rep(i,N) cin >> P[i];
    rep(i,N) cin >> C[i];
    
    vector<ll> score(N), now(N);
    //step 0
    rep(i,N){
        P[i]--; // set P => 0~N-1
        now[i] = i;
        score[i] = C[i];
    }
    ll ans = *max_element( score.begin(), score.end() );
    rep(step,K-1){
        rep(i,N){
            now[i] = P[ now[i] ];
            score[i] += C[ now[i] ];
        }
        ll max_tmp = *max_element( score.begin(), score.end() );
        ans = max( ans, max_tmp );
    }
    cout << ans << endl;
    return 0;
}