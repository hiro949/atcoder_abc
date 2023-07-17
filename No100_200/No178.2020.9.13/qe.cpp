#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

// mannhattan distance => 45 degree rotation
// max( abs(x1-x2) + abs(y1-y2) )
// abs(x1-x2) = max( x1-x2, x2-x1)
// =>  max( abs(x1-x2) + abs(y1-y2) ) = max( x1-x2+y1-y2, x1-x2+y2-y1, x2-x1+y1-y2, x2-x1+y2-y1 )
// X = x+y, Y = x-y
// max( abs(x1-x2) + abs(y1-y2) ) = max( X1-X2, Y1-Y2, Y2-Y1, X2-X1 )
// = max( abs(X1-X2), abs(Y1-Y2) ) //

int main(){
    int N;
    cin >> N;
    vector<int> x45(N), y45(N);
    rep(i,N){
        int x,y;
        cin >> x >> y;
        x45[i] = x+y;
        y45[i] = x-y;
    }
    sort(x45.begin(),x45.end());
    sort(y45.begin(),y45.end());
    cout << max( abs(x45[N-1]-x45[0]), abs(y45[N-1]-y45[0]) );
    return 0;
}
