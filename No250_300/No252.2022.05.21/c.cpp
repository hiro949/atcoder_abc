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
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    vector<int> cnt(10,0);
    vector<int> time(10,0);
    int ans = inf;
    rep(t,10){
        vector<int> flag(10,0);
        int tmp;
        rep(i,n){
            int x = s[i][t]-'0';
            ++cnt[x];
            if(flag[x]) time[x] = max(time[x],t+flag[x]*10);
            ++flag[x];
            if(cnt[x]==10) tmp = time[x];
        }
        ans = min(ans,tmp);
    }
    cout << ans << endl;
    return 0;
}