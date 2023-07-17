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

//尺取り法

int main(){
    string s;
    int n,k;
    cin >> s >> k;
    n = s.size();
    vector<int> a(n);
    rep(i,n) a[i] = (s[i]=='.');
    int ans = 0;
    int r=0, sum=0;
    rep(l,n){
        while(r<n and sum+a[r]<=k){
            sum +=a[r]; ++r;
        }
        ans = max(ans,r-l);
        sum -= a[l];
    }
    cout << ans << endl;
    return 0;
}