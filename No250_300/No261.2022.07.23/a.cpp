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
    vector<int> v(101,0);
    int l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;
    for( int i=l1;i<=r1;++i) ++v[i];
    for( int i=l2;i<=r2;++i) ++v[i];
    int ans=0;
    for( int x : v ){
        if(x==2) ++ans;
    }
    cout << max(ans-1,0) << endl;
    return 0;
}