#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int n;
    cin >> n;
    auto stock = []( ll x ){return x*(x+1)/2;};
    ll ac = 0, rj = 1e9;
    while(rj-ac>1){
        ll piv = (ac+rj)/2;
        if(stock(piv)>=n) rj = piv;
        else ac = piv;
    }
    cout << rj << endl;
    return 0;
}
