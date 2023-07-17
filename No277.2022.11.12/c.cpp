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
    map<int,vector<int>> mp;
    map<int,bool> come;
    int a,b;
    rep(i,n){
        cin >> a >> b;
        mp[a].push_back(b);mp[b].push_back(a);
        come[a] = false;
        come[b] = false;
    }
    queue<int> q; q.push(1);
    int ans = 1;
    while(!q.empty()){
        int p = q.front();q.pop();
        come[p] = true;
        for( int pn : mp[p] )if(!come[pn]){
            ans = max(ans,pn);
            q.push(pn);
        }
    }
    cout << ans << endl;
    return 0;
}