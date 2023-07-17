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
    string t;
    cin >> n >> t;
    int x=0,y=0;
    int d[2] = {1,0};
    for( char c : t){
        if(c=='S'){
            x+=d[0];y+=d[1];
        }
        else{
            int d2[2] = {d[1],-d[0]};
            swap(d,d2);
        }
    }
    cout << x << " " << y << endl;
    return 0;
}