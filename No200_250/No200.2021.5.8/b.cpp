#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    ll n;
    int k;
    cin >> n >> k;
    rep(i,k){
        if(n%200==0) n/=200;
        else (n*=1000)+=200;
    }
    cout << n << endl;
    return 0;
}