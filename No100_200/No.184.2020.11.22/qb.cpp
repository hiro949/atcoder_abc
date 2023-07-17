#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n,x;
    string s;
    cin >> n >> x;
    cin >> s;
    int ans = x;
    for( char c : s ){
        if(c=='x') ans = max(ans-1,0);
        else ++ans;
    }
    cout << ans << endl;
    return 0;
}

    