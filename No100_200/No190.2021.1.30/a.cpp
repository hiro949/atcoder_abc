#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if( a-b > 0 ) cout << "Takahashi" << endl;
    else if ( a-b < 0 ) cout << "Aoki" << endl;
    else{
        if(c==1) cout << "Takahashi" << endl;
        else cout << "Aoki" << endl;
    }
    return 0;
}