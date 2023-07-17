#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    if(c%2==0){
        a=abs(a); b=abs(b);
    }
    if(a>b) cout << ">" << endl;
    else if(a<b) cout << "<" << endl;
    else cout << "=" << endl;
    return 0;
}
