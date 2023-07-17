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
    int n, x;
    cin >> n;
    vector<int> t(n), k(n);
    vector<vector<int>> a( n ,vector<int>() );
    rep(i,n){
        cin >> t[i] >> k[i];
        rep(j,k[i]){
            cin >> x; --x;
            a[i].push_back(x);
        }
    }
    vector<bool> flag(n,false);
    queue<int> q;
    q.push(n-1); flag[n-1]=true;
    while(!q.empty()){
        x = q.front(); q.pop();
        for( int ai : a[x] )if(!flag[ai]){
            q.push(ai); flag[ai]=true;       
        }
    }
    ll ans = 0;
    rep(i,n)if(flag[i]) ans += t[i];
    cout << ans << endl;
    return 0;
} 
