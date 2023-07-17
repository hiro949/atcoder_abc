#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    string S;
    cin >> S;
    if( S == "RRR" ) cout << 3 << endl;
    if( S == "RRS" or  S == "SRR" ) cout << 2 << endl;
    if( S == "RSS" or S == "RSR" or S == "SRS" or S == "SSR" ) cout << 1 << endl;
    if( S == "SSS" ) cout << 0 << endl;
    return 0;
}