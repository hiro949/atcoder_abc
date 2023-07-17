#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int gcd_max = 0;
    int n_max=2;
    for( int x =2; x<=1000; ++x ){
        int gcd = 0;
        for( int ai : a){
            if( ai%x == 0 ) ++gcd;
        }
        if( gcd>=gcd_max ){
            gcd_max = gcd;
            n_max = x;
        }     
    }
    cout << n_max <<endl;
    return 0;
}