#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    vector<int> a(4);
    rep(i,4) cin >>a[i];
    int ans = *min_element(a.begin(),a.end());
    cout << ans << endl;
    return 0;
}
