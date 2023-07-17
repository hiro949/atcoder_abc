#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
// a : 0, b : 1;

ll next_combination(ll sub) {
    ll x = sub & -sub, y = sub + x;
    return (((sub & ~y) / x) >> 1) | y;
}

int main(){
    int a,b;
    ll k;
    cin >> a >> b >> k;
    ll bit = (1<<b)-1;
    while(k>0){
        bit = next_combination(bit);
        --k;
    }
    string ans = "";
    rep(i,a+b){
        if( bit & (1<<i)) ans += 'b';
        else ans += 'a';
    }
    cout << ans << endl;
    return 0;
}
