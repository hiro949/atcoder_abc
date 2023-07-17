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
    int n,k;
    cin >> n >> k;
    vector<P> a(n);
    rep(i,n) cin >> a[i].first, a[i].second=i;
    sort(a.begin(),a.end());
    rep(i,n) cout << a[i].first << " ";
    cout << endl;
    rep(i,n) cout << a[i].second << " ";
    cout << endl;
    rep(i,n){
        int ir = upper_bound(a.begin(),a.end(),make_pair(a[i].first,inf)) - a.begin() - a[i].second;
        int il = lower_bound(a.begin(),a.end(),make_pair(a[i].first,0)) - a.begin() - a[i].second;
        int ix = (i - a[i].second )%k;
        cout << i << " " << il << " " << ix << " " << ir << endl;
        if(il%k<= ix and ix < ir%k){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}