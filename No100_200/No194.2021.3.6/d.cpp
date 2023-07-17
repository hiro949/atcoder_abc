#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

// coupon collerctor's problem

int main(){
    int n;
    cin >> n;
    double ans = 0;
    for( int i=1; i<n; ++i ){
        ans += (double)n/(n-i);
    }
    printf( "%.10f\n", ans );
    return 0;    
}