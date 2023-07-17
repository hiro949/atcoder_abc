#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

ll g2( ll n ){
    string s = to_string(n);
    sort(s.begin(),s.end());
    return stoll(s);
}

ll g1( ll n ){
    string s = to_string(n);
    sort(s.begin(),s.end(),greater<ll>());
    return stoll(s);
}

int main(){
    ll n;
    int k;
    cin >> n >> k;
    ll a1 = n;
    rep(i,k){
        ll a2 = g1(a1) - g2(a1);
        if(a1==a2) break;
        a1 = a2;
    }
    cout << a1 << endl;
    return 0;
}
