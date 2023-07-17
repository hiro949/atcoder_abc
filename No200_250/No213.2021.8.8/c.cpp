#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

template <typename T>
void compress(vector<T> &X) {
    vector<T> vals = X;
    sort(vals.begin(), vals.end());
    vals.erase(unique(vals.begin(), vals.end()), vals.end());
    for (int i = 0; i < (int)X.size(); i++) {
        X[i] = lower_bound(vals.begin(), vals.end(), X[i]) - vals.begin();
    }
    return;
}

int main(){
    int h,w,n;
    cin >> h >> w >> n;
    vector<int> a(n),b(n);
    rep(i,n) cin >> a[i] >> b[i];
    compress(a); compress(b);
    rep(i,n) cout << a[i]+1 << " " << b[i]+1 << endl;
    return 0;
}