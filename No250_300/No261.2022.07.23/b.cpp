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
    cin >> n;
    vector<vector<char>> A(n,vector<char>(n));
    rep(i,n)rep(j,n) cin >> A[i][j];
    rep(i,n)rep(j,i){
        if(A[i][j]=='W' and A[j][i]=='L') continue;
        if(A[i][j]=='L' and A[j][i]=='W') continue;
        if(A[i][j]=='D' and A[j][i]=='D') continue;
        cout << "incorrect" << endl;
        return 0;
    }
    cout << "correct" << endl;
    return 0;
}