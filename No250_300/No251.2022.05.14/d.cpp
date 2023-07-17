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
const int nmax=300, wmax=1e6;

int main(){
    int w;
    cin >> w;
    vector<int> ans;
    int total=0,x=1;
    while(total<w){
        total += x; x = total;
        ans.push_back(x); 
    }
    for( int a : ans ) cout << a << " ";
    cout << endl;
    return 0;
}