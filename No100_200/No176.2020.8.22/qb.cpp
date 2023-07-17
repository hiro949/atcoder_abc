#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int digit_sum( string N ){
    int sum = 0;
    rep( i, N.length() ) sum += N[i] - '0'; // treat bit
    return sum;
}

int main(){
    string N;
    cin >> N;
    int sum = digit_sum(N);
    if( sum%9 == 0 ) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}