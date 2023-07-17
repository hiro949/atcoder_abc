#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;

void maltiple_mat_vec( vector<vector<int>> &M, vector<int> &v, vector<int> &Mv, int N ){
    rep(i,N ){
        Mv[i] = 0;  
        rep(j,N) Mv[i] += M[i][j]*v[j];
    }
    return;
}

int main(){
    string S;
    cin >> S;
    int N = S.length();
    // get edge of the graph
    vector<vector<int>> E(N, vector<int>(N, 0));
    char prev = 'R';
    int non_elgt = 0;
    int converge = 0;
    rep(i,N){
        if( S[i] == 'R' ){
            E[i+1][i] = 1;
        }else{
            E[i-1][i] = 1;
        }
        if( S[i] == prev ) ++non_elgt;
        else{
            converge = max(non_elgt,converge);
            non_elgt = 1;
            prev = S[i];
        }
    }
    vector<int> v0(N,1), v1(N,0);
    int step = converge + converge%2;
    rep(n,step){
        maltiple_mat_vec( E, v0, v1, N );
        v0 = v1;
    }
    for( int n : v0 ) cout << n << endl;
    return 0;
}

