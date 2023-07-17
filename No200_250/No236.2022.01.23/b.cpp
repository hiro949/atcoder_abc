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
    int n;
    cin >> n;
    int n2=4*n-1;
    vector<int> cnt(n+1,0);
    int a;
    rep(i,n2){
        cin >> a;
        ++cnt[a];
    }
    for( int i=1; i<=n; ++i)if(cnt[i]<4){
        cout << i << endl;
        break;
    }
    return 0;
}