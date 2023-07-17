#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int x,y;
    cin >> x >> y;
    int w = max(x,y);
    int l = min(x,y);
    if(l+3>w) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}