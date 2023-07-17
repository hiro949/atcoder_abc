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

int n,m;
vector<vector<int>> g1(8,vector<int>()),g2(8,vector<int>());

bool OK( vector<int> &p ){
    vector<vector<bool>> ans(n,vector<bool>(n,false));
    rep(i,n){
        for( int v2 : g2[p[i]] ){
            for( int v1 : g1[i] ){
                if(p[v1]==v2){
                    ans[i][v1] = true;
                    ans[v1][i] = true;
                    break;
                }
            }
        }
    }
    rep(i,n){
        for( int j : g1[i] ){
            if(!ans[i][j]) return false;
        }
    }
    return true;
}

int main(){
    cin >> n >> m;
    int a,b;
    rep(i,m){
        cin >> a >> b; --a; --b;
        g1[a].push_back(b); g1[b].push_back(a);
    }
    rep(i,m){
        cin >> a >> b; --a; --b;
        g2[a].push_back(b); g2[b].push_back(a);
    }
     vector<int> p(n);
     rep(i,n) p[i] = i;
     do{
         if(OK(p)){
             cout << "Yes" << endl;
             return 0;
         }
     }while(next_permutation(p.begin(),p.end()));
    cout << "No" << endl;
    return 0;
}