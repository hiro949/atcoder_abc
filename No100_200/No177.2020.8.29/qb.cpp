#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    string S, T;
    cin >> S;
    cin >> T;
    int ans = T.size();
    for(int i=0; i<=S.size()-T.size(); i++ ){
        string sub = S.substr(i,T.size());
        int mismatch = 0;
        rep(j,T.size()){
            if( sub[j] != T[j] ) ++mismatch;
        }
        ans = min(ans,mismatch);
    }
    cout << ans << endl;
    return 0;
}