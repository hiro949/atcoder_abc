#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

ll k_to_10( string n, int k ){
    ll ans=0;
    for( char c : n ){
        ans *= k;
        ans += c-'0';
    }
    return ans;
}

int main(){
    int k;
    string ak,bk;
    cin >> k >> ak >> bk;
    ll a=k_to_10(ak,k),b=k_to_10(bk,k);
    cout << a*b << endl;
    return 0;
}