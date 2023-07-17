#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;


void __init__(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int cnt = 0;
    rep(i,n)if(a[i]%2==1) ++cnt;
    cout << cnt << endl;
    return;
}

int main(){
    int T;
    cin >> T;
    rep(it,T){
        __init__();
    }
    return 0;
}