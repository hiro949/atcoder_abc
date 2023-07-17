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
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    rep(j,n%k){
        vector<int> b(n,inf);
        for( int i=j; i<n; ++k ) b[i/k] = a[i];
        sort(b.begin(),b.end());       
        for( int i=j; i<n; ++k ) a[i] = b[i/k];
    }
    rep(i,n-1){
        if(a[i]>a[i+1]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}