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
    int n,m;
    cin >> n >> m;
    int a,b;
    vector<vector<int>> g1(n,vector<int>(n,0));
    vector<vector<int>> g2(n,vector<int>(n,0));
    rep(i,m){
        cin >> a >> b; --a; --b;
        g1[a][b]=1;g1[b][a]=1;
    }
    rep(i,m){
        cin >> a >> b; --a; --b;
        g2[a][b]=1;g2[b][a]=1;
    }
     vector<int> p(n);
     rep(i,n) p[i] = i;
     vector<vector<int>> gp(n,vector<int>(n));
     do{
         rep(i,n)rep(j,n) gp[i][j]=g2[p[i]][p[j]];
         if(gp==g1){
             cout << "Yes" << endl;
             return 0;
         }
     }while(next_permutation(p.begin(),p.end()));
    cout << "No" << endl;
    return 0;
}