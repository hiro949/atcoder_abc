#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int N;
    cin >> N;
    vector<ll> A(N);
    rep(i,N) cin >> A[i];
    sort( A.begin(), A.end() );
    ll q = 7 + 1e9;
    ll ans = 0;
    for( int i=0; i<N-1; ++i){
        for( int j=i+1; j<N; ++j){
            ans += A[i]*A[j];
            ans %=q;
        }
    }
    cout << ans << endl;
    return 0;
}