#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int x = c*d-b;
    if(x<=0){
        cout << -1 << endl;
        return 0;
    }
    cout << a/x + (a%x!=0) << endl;
    return 0;
}
