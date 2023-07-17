#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max();

int main(){
    int n, d;
    cin >> n >> d;
    vector<P> wall(n);
    rep(i,n){
        cin >> wall[i].second >> wall[i].first;
        --wall[i].second; --wall[i].first;
    }
    sort(wall.begin(),wall.end());
    wall.emplace_back(-inf,-inf);
    int ans = 1;
    int i=0;
    int punch = wall[i].first; 
    while(i<n){
        if( wall[i].second <= punch + d -1 and punch <= wall[i].first ) ++i;
        else{ ++ans; punch=wall[i].first; }
    }
    cout << ans << endl;
    return 0;
}