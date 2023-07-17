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
    int n;
    cin >> n;
    vector<ll> a(n),unique;
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end());
    int stock = 0;
    int c=1;
    rep(i,n){
        if(a[i]>=c){
            unique.push_back(a[i]);
            c = a[i]+1;
        }
        else ++stock;
    }
    int ans = 0, rem = unique.size();
    c=1;
    rep(i,rem){
        ans = c;
        if(c==unique[i]){
            ++c;
        }else if(stock>1){
            stock -= 2;
            ++c;
        }else if(stock==1){
            --stock;
            --rem;
            ++c;
        }else if(rem-i>1){
            rem -=2;
            ++c;
        }else{
            break;
        }
    }
    cout << ans << endl;
    return 0;
}