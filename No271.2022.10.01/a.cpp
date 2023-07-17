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

string s_ref = "0123456789ABCDEF";

int main(){
    int n;
    cin >> n;
    if(n==0){
        cout <<"00" <<endl;
        return 0;
    }
    string s;
    while(n>0){
        int q = n%16;
        n /=16;
        s += s_ref[q];
    }
    reverse(s.begin(),s.end());
    if(s.length()==1){
        cout << "0";
    }
    cout << s << endl;
    return 0;
}