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

const int n=(1<<20);
vector<ll> a(2*n,-1);
set<int> s;

void __init__1(ll x){
    int h = x%n;
    if(s.empty() or a[h] == -1){s.insert(h); s.insert(h+n);}
    else{
        int y = *s.lower_bound(h+1);
        h = lower_bound(a.begin()+h,a.begin()+y,0)-a.begin();
        h = (h-1+n)%n;
    }
    a[h] = x; a[h+n] = x;
    return;
}

int main(){
    int q,t;
    ll x;
    cin >> q;
    rep(i,q){
        cin >> t >> x;
        if(t==1) __init__1(x);
        else cout << a[int(x%n)] << endl;
    }
    return 0;
}
