#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    vector<P> ball(n);
    rep(i,n) cin >> ball[i].first >> ball[i].second;
    sort(ball.begin(),ball.end(),[](P l, P r){ return l.second < r.second; } );
    

}