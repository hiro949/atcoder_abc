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
    int n,x;
    cin >> n >> x; --x;
    vector<int> a(n);
    rep(i,n){cin >> a[i]; --a[i];}
    vector<bool> flag(n,false);
    int cnt = 0;
    while(!flag[x]){
        ++cnt; 
        flag[x]=true;
        x=a[x];
    }
    cout << cnt << endl;
    return 0;
}
