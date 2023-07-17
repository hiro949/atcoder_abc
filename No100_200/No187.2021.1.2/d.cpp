#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

// aoki = sum(not go)ai
// takahashi = sum(go)(ai+bi)
//takahashi>aoki => sum(go)bi+sum(go)(ai)> sum(not go)(ai)
//takahashi>aoki => sum(go)bi + 2sum(go)(ai) > sum(all)(ai)

bool OK( int t, int n, ll asum, vector<ll> &win ){
    ll ans = 0;
    rep(i,t) ans += win[n-1-i];
    return ans>asum;
}

int main(){
    int n;
    cin >> n;
    vector<ll> win(n);
    ll asum = 0;
    rep(i,n){
        ll a,b;
        cin >> a >> b;
        asum += a;
        win[i] = b + 2*a;
    }
    sort(win.begin(),win.end());
    int t1 = 0, t2=n;
    while(t2-t1>1){
        int piv = (t1+t2)/2;
        if( OK(piv,n,asum,win) ) t2=piv;
        else t1=piv;
    }
    cout << t2 << endl;
    return 0;
}