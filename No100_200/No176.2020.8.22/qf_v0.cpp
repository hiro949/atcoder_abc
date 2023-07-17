#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

// sort s.t. consistent with removing-rule
// # of sort 

int get_score( int L, vector<int> &A ){
    if( A.size() == 3 ){
        if( A[0] == A[1] and A[1]== A[2] ) return 1;
        return 0;
    }
    int ans = 0;
    for( int p=0; p<5; p++ ){
        for( int q=p+1; q<5; q++ ){
            for( int r=q+1; r<5; r++ ){
                vector<int> Ap( L-3 );
                int ia = 0;
                rep(i,L){
                    if( ia != p or ia != q or ia != r ){
                        Ap[ia] = A[i];
                        ++ia;
                    }
                }
                int score_tmp = get_score( L-3, Ap );
                ans = max( ans, score_tmp );
            }
        }
    }
    return ans;
}

int main(){
    int N;
    cin >> N;
    vector<int> A(3*N);
    rep(i,3*N) cin >> A[i];
    cout << get_score( 3*N, A ) << endl;
    return 0;
}