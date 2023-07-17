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

void sieve( set<int> &prime, int N){
    vector<bool> is_p(N+1,true);
    if( N<2 ) return;
    is_p[0] = false; is_p[1] = false;
    for( int  x=2; x*x <=N; ++x ){
        if( is_p[x] ){
            for( int y=2*x; y<=N; y += x ) is_p[y] = false;
        }
    }
    rep(i,N+1){
        if( is_p[i] ) prime.insert(i);
    }
    return;
}

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    set<int> prime;
    sieve( prime, b+d );
    for( int x=a; x<=b; ++x ){
        int cnt=0;
        for( int y=c; y<=d; ++y ){
            if(prime.count(x+y)>0) ++cnt;
        }
        if(cnt==0){
            cout << "Takahashi" << endl;
            return 0;
        }
    }
    cout << "Aoki" << endl;    
    }