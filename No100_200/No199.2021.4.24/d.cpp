#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n,vector<int>());
    rep(i,m){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int> color(n,-1);
    vector<int> idx(n);
    rep(i,n) idx[i] = i;
    sort(idx.begin(),idx.end(),[&](int i,int j){
        return g[i].size()<g[j].size();
    });
    
}