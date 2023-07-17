#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

// sum(xf(x)) = sum( sum(nX;nX<=N) )
// sum(nX;nX<=N) = (1+2+...+[N/X])*X = [N/X]([N/X]+1)*X/2

int main(){
    int N;
    cin >> N;
    int ans = 0;
    for( int x=1; x<=N; ++x ){
        int y = N/x;
        ans += y*(y+1)*x/2;
    }
    return 0;
}
