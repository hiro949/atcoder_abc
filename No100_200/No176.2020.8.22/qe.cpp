#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int H,W,M;
    cin >> H >> W >> M;
    vector<int> h(M), w(M);
    rep(i,M){
        cin >> h[i] >> w[i];
        --h[i];
        --w[i];
    }
    vector<int> row(H,0), col(W,0);
    for( int hi : h ) ++row[hi];
    vector<int>::iterator rmax = max_element( row.begin(), row.end() );
    rep(m,M){
        if( h[m] != distance(row.begin(),rmax) ) ++col[ w[m] ];
    }
    vector<int>::iterator cmax = max_element( col.begin(), col.end() );
    //cout << distance(row.begin(),rmax) << distance(col.begin(),cmax) << endl;
    cout << *rmax + *cmax << endl;
    return 0;
}