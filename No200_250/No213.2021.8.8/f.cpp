#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
// T[k] = sum(l)f(Sk,Sl)
// T[k+1]-T[k] = sum(l)[ s[k+1]==s[l] ]

int main(){
    int n;
    string s;
    cin >> n >> s;
    vector<int> cnt(26,0);
    for( char c : s ) ++cnt[c-'0'];
    ll ans = 0;
    reverse(s.begin(),s.end());
    vector<ll> v
    for( char c : s ){
        ans += cnt[c-'0'];
        cout << ans <<endl;
    }
    return 0;
}