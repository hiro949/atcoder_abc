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
    int n,m,x,t,d;
    cin >> n >> m >> x >> t >> d;
    if(m>=x) cout << t << endl;
    else{
        for(int i=x; i>m; --i ) t -=d;
        cout << t << endl;
    }
    return 0;
}