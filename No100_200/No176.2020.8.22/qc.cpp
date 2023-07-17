#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    ll N;
    cin >> N;
    vector<ll> A(N);
    rep(i,N) cin >> A[i];
    ll sum = 0;
    ll tallest = 0;
    for(int i=0; i<N; i++){
        //if( A[i] > tallest ) tallest = A[i];
        //else sum += tallest - A[i];
        tallest = max(tallest,A[i]);
        sum += tallest - A[i];
    }
    cout << sum << endl;
    return 0;
}
