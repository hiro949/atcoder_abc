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

int dist( int x1, int y1, int x2, int y2 ){
    int dx = x1 - x2, dy = y1 - y2;
    return dx*dx + dy*dy;
}

int main(){
    int n,d;
    cin >> n >> d;
    vector<vector<int>> p(n,vector<int>(2));
    rep(i,n) cin >> p[i][0] >> p[i][1];
    vector<bool> flag(n,false);
    queue<int> q; q.push(0); flag[0]=true;
    while(q.size()>0){
        int iv = q.front(); q.pop();
        rep(i,n)if(!flag[i] and d*d - dist(p[i][0],p[i][1],p[iv][0],p[iv][1])>=0){
            flag[i] = true;
            q.push(i);
        }
    }
    rep(i,n){
        if(flag[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}