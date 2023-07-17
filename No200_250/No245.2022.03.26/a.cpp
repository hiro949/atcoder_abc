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
    int a,b,c,d;
    cin >>a >> b >> c >> d;
    bool tf=true;
    if(a<c) tf=true;
    else if(a>c) tf=false;
    else{
        if(b<=d) tf=true;
        else tf=false;
    }
    if(tf) cout << "Takahashi" <<endl;
    else cout << "Aoki" <<endl;
    return 0;
}