#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;

int main(){
    string S;
    cin >> S;
    int N = S.length();
    // get step to be elgotic in the graph (Ergodic hypothesis)
    char prev = 'R';
    int count = 0;
    int converge = 0;
    rep(i,N){
        if( S[i] == prev ) ++count;
        else{
            converge = max(count,converge);
            count = 1;
            prev = S[i];
        }
    }
    vector<int> v0(N,1);
    // converge => oscillation with period 2
    int iter = converge + converge%2;
    rep(n,iter){
        // multiplication of Edge matrix of the graph & state of nodes
        vector<int> v1(N,0);
        rep(i,N){
            if( S[i] == 'R' ){
                v1[i+1] += v0[i];
            }else{
                v1[i-1] += v0[i];
            }
        }
        v0 = v1;
    }
    for( int n : v0 ) cout << n << endl;
    return 0;
}

