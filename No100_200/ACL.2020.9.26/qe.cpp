#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

const ll M = 998244353;

int main(){
    int n,q;
    cin >> n >> q;
    string S = "";
    rep(i,n) S += "1";
    rep(i,q){
        int li,ri,di;
        cin >> li >> ri >> di;
        for( int i=li-1; i<=ri-1; ++i ) S[i] = (char)di;
        cout << stoll(S)%M << endl;
    }
    return 0;
}
    