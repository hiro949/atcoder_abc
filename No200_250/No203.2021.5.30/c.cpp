#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<ll,ll>;
const int inf = numeric_limits<int>::max();

int main(){
    int n;
    ll k;
    cin >> n >> k;
    vector<P> a(n);
    rep(i,n) cin >> a[i].first >> a[i].second;
    sort(a.begin(),a.end(),[]( P x, P y){return x.first<y.first;});
    ll dist = 0;
    int pos = 0;
    while(k>0){
        dist += k; k=0;
        while( a[pos].first<=dist and pos<n ){
            k += a[pos].second;
            ++pos;
        }
    }
    cout << dist << endl;
    return 0;
}
