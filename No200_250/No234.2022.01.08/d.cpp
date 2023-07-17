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
    vector<int> p(n);
    rep(i,n) cin >> p[i];
    priority_queue<int,vector<int>,greater<int>> q;
    rep(i,k) q.push(p[i]);
    cout << q.top() << endl;
    for( int i=k; i<n; ++i ){
        if(q.top()<p[i]){
            q.pop(); q.push(p[i]);
        }
        cout << q.top() << endl;
    }
    return 0;
}