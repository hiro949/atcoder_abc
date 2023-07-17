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
    string s="";
    for(int i=1; i<=n; ++i){
        string s2=s;
        char c = '0'+i;
        if(i>=10) c = 'A'+ (i-10);
        s = s2 + c + s2;
    }

    for( char c : s ){
        if(c>=65) cout << int(c-'A')+10 << " ";
        else cout << c-'0' << " ";
    }
    cout << endl;
    return 0;
}