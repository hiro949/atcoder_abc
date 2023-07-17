#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
int nmax = 200000;
vector<vector<int>> G(nmax);
vector<bool> flag(nmax,false);

int main(){
    int n;
    cin >> n;
    rep(i,n-1){
        int a,b;
        cin >> a >> b;
        G[a-1].push_back(b-1); G[b-1].push_back(a-1);
    }
    if(G[0].size()==0){
        cout << 1 << endl;
        return 0;
    }
    stack<int> q; q.push(0);
    set<int> log;
    while(!q.empty()){
        int s = q.top(); flag[s]=true;
        cout << s+1 << " ";
        int vmin = inf;
        if(log.count(s)==0) for( int v : G[s] )if( !flag[v] ) vmin = min(vmin,v);
        if(vmin==inf){
            q.pop(); log.insert(s);
            continue;
        }
        else q.push(vmin);
    }
    cout << endl;
    return 0;
}