#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;
// 8!~4x10^5

int main(){
    int n,k;
    cin >> n >> k;
    vector<vector<int>> t(n,vector<int>(n));
    rep(i,n)rep(j,n){
        cin >> t[i][j];
    }
    int ans = 0;
    vector<int> v(n);
    iota(v.begin(),v.end(),0);
    do{
        if(v[0] != 0 ) continue;
        int time = 0;
        rep(i,n-1) time += t[v[i]][v[i+1]];
        time += t[v[n-1]][0];
        if(time==k) ++ans;
    }while( next_permutation(v.begin(),v.end()) );
    cout << ans << endl;
    return 0;
}