#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(),a.end());
    if( a[1]-a[0] == a[2]-a[1] ) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}