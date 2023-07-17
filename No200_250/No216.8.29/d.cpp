#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
// same color => 2
// same c in same box => out
// cross order => out

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> k(m);
    vector<vector<int>> a(m,vector<int>());
    rep(i,m){
        cin >> k[i];
        rep(j,k[i]){
            int aij; cin >> aij;
            a[i].push_back(aij);
        }
    }

}