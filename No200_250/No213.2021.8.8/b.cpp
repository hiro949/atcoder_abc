#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int n;
    cin >> n;
    vector<P> a(n);
    rep(i,n){
        cin >> a[i].first; a[i].second=i+1;
    }
    sort(a.begin(),a.end(),[](P l, P r){ return l.first>r.first;});
    cout << a[1].second << endl;
    return 0;
}