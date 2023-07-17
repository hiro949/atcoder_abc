#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using PP = pair<P,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int main(){
    int n,a;
    cin >> n >> a;
    vector<PP> fish(n);
    rep(i,n) cin >> fish[i].second >> fish[i].first.second >> fish[i].first.first;

    return 0;
}