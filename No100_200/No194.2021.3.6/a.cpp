#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    int a,b; 
    cin >> a >> b;
    a += b;
    if( a>=15 and b>=8 ){
        cout << 1 << endl;
        return 0;
    }
    if( a>=10 and b>= 3 ){
        cout << 2 << endl;
        return 0;
    }
    if( a>=3 ){
        cout << 3 << endl;
        return 0;
    }
    cout << 4 << endl;
    return 0;
}