#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int gcd( int m, int n ){ // m/n
    if( n==0 ) return m;
    return gcd( n, m%n);
}

P coprime( int s, int g, vector<int> &A ){ // wrong : you cannot comare all combination
    if( g == s + 1 ) return {A[s],1};
    int piv = (g+s)/2;
    P p1 = coprime(s,piv,A);
    P p2 = coprime(piv,g,A);
    int r = gcd( p1.first, p2.first );
    int cprm = p1.second*p2.second;
    if( r > 1 ) cprm = 0;
    return {r,cprm};
}

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i,N) cin >> A[i];
    P p = coprime( 0, N, A );
    int r = p.first;
    int cprm = p.second;
    if( r == 1 ){
        if( cprm == 1 ) cout << "pairwise coprime" << endl;
        else cout << "setwise coprime" << endl;
    }
    else  cout << "not coprime" << endl;
    return 0;
}
