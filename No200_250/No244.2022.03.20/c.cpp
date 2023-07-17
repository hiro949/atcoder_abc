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
    vector<bool> num(2*n+1,false);
    int a=0,b=2;
    cout << a+1 << endl;
    num[a]=true;
    while(b>=0){
        cin >> b;
        if(b==0) break;
        --b;
        num[b]=true;
        while(num[a]) ++a;    
        cout << a+1 << endl;
        num[a]=true;
        fflush(stdout);
    }
    return 0;
}