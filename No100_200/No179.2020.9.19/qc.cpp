#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int N;
    cin >> N;
    int count = 0;
    for( int b=1; b<N; ++b ){
        int a = N/b;
        if( a*b == N ) count += a-1;
        else count += a;
    }
    cout << count << endl;
    return 0;
}