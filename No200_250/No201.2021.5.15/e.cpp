#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int n;
    cin >> n;
    vector<vector<int>> tree(n,vector<int>(0));
    vector<vector<int>> w(n,vector<int>(n));
    rep(i,n){
        int ui,vi,wi;
        cin >> ui >> vi >> wi;
        --ui;--vi;
        tree[ui].push_back(vi);tree[vi].push_back(ui);
        w[ui][vi]=wi; w[vi][ui]=wi;
    }

}