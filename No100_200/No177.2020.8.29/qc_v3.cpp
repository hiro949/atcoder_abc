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
    ll q = 7 + 1e9;
    ll sum = 0, sum2 = 0;
    rep(i,N){
        sum += A[i];
        sum2 += A[i]*A[i];
    }
    int ans = (sum*sum - sum2)/2%q;
    cout << ans << endl;
    return 0;
}