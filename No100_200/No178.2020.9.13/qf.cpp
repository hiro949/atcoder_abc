#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

// same # > N => Ai=Bi always exists
bool judge( vector<int> &CA, vector<int> &CB, int N ){
    for( int i=0; i<=N; ++i ){
        if( CA[i]+CB[i] > N ) return false;
    }
    return true;
}

// TA[i], TB[i]: count (element < i) ( TA[i] = sum_{j=0...i}CA[j] )
// condition of x:
// all i in [1,N];
// for 3 sections (following) S1..S3, (S1^S2)v(S2^S3)v(S3^S1) = null
// S1 = ( TA[i-1], TA[i] ]
// S2 = ( x+TB[i-1], x+TB[i] ]
// S3 = ( N+TA[i-1], N+TA[i] ]
// <=> all i in [1,N]; TA[i] - TB[i-1] <= x <= N + TA[i-1] - TB[i]

int B_shift( vector<int> &CA, vector<int> &CB, int N ){
    vector<int> TA(N+1,0), TB(N+1,0);
    for( int i=1; i<=N; ++i ){
        TA[i] = CA[i] + TA[i-1];
        TB[i] = CB[i] + TB[i-1];
    }
    int xmax=0;
    for( int i=1; i<=N; ++i ){
        xmax = max( xmax, TA[i]-TB[i-1] );
    }
    return xmax;
}

int main(){
    int N;
    cin >> N;
    vector<int> A(N),B(N);
    vector<int> CA(N+1,0), CB(N+1,0); // # of Ai/Bi = n
    rep(i,N){
         cin >> A[i]; // Ai,Bi = 1...N, Ai,Bi are sorted
         ++CA[A[i]];
    }
    rep(i,N){
         cin >> B[i]; // Ai,Bi = 1...N, Ai,Bi are sorted
         ++CB[B[i]];
    }
    bool tf = judge(CA,CB,N);
    if(!tf) cout << "No" << endl;
    if(tf){
        cout << "Yes" << endl;
        // construct B_purmutation by shift B by x;
        int x = B_shift(CA,CB,N);
        rep(i,N){
            if(i) cout << " ";
            cout << B[(i-x+N)%N];
        }
        cout << endl;
    }
    return 0;
}
