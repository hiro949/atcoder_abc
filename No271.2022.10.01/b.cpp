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

int main(){
    int n,q;
    cin >> n >> q;
    vector<int> L(n);
    vector<vector<int>> a(n,vector<int>());
    int aij;
    rep(i,n){
        cin >> L[i];
        rep(j,L[i]){
            cin >> aij;
            a[i].push_back(aij);
        }
    }
    int s,t;
    rep(iq,q){
        cin >> s >> t;--s;--t;
        cout << a[s][t] << endl;
    }
    return 0;
}