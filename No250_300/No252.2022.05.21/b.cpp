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
    int n,k;
    cin >> n >> k;
    vector<P> a(n);
    vector<int> b(k);
    rep(i,n) cin >> a[i].first,a[i].second=1;
    rep(i,k){
        cin >> b[i], --b[i];
        a[b[i]].second=0;
    }
    sort(a.rbegin(),a.rend());
    int amax = a[0].first; 
    rep(i,n){
        if(a[i].first<amax) break;
        if(a[i].second==0){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}