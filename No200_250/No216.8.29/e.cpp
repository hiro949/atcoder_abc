#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int n; ll k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    priority_queue<ll,vector<ll>,less<ll>> q;
    rep(i,n) q.push(a[i]);
    ll x,y,ans = 0;
    while(!q.empty() and k>0){
        cout << q.top() << endl;
        if(q.size()==1){
           ans += min(k,q.top()); q.pop();
           continue;
        }
        x = q.top(); q.pop();
        y = q.top(); q.pop();
        if(x>y){
            ans += min(k,x-y+1)*(x+y)/2;
            k = max(0ll,k-(x-y));
            q.push(y-1), q.push(y);
        }else{
            ans += x; --x; --k;
            q.push(x);
        }
    }
    cout << ans << endl;
    return 0;
}