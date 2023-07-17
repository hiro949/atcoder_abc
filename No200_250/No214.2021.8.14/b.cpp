#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int s,t,cnt=0;
    cin >> s >> t;
    rep(a,101)rep(b,101)rep(c,101){
        if( a+b+c>s ) continue;
        if(a*b*c>t) continue;
        ++cnt;
    }
    cout << cnt << endl;
    return 0;
}
