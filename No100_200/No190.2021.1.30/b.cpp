#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n,s,d;
    cin >> n >> s >> d;
    string ans = "No";
    rep(i,n){
        int x,y;
        cin >> x >> y;
        if( x<s and y>d ) ans = "Yes";
    }
    cout << ans << endl;
    return 0;
}