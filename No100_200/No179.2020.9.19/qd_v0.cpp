#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

const int q = 998244353;

int main(){
    int N,K;
    cin >> N >> K;
    set<int> move;
    rep(i,K){
        int l,r;
        cin >> l >> r;
        for( int i=l; i<=r; ++i ) move.insert(i);
    }
    vector<int> dp(N,0); // ways & total move
    //start from 0
    dp[0] = 1;
    rep(j,N){
        for( int d : move ){
            if(j+d<N){
                dp[j+d] += dp[j];
                dp[j+d] %= q;
            }
        }
    }
    cout << dp[N-1] << endl;
    return 0;
}