#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

// estimate # of flipped pieces from cross point of flipped row & col

P min_point( int rc, P &p_ref, set<P> & cross, int N ){
    P r; r.first=N-1; r.second=N-1;
    for( P p : cross ){
        if( p.first >= p_ref.first & p.second >= p_ref.second ){
            if(rc == 0 & r.first > p.first ) r=p;
            if(rc == 1 & r.second > p.second ) r=p;
        }
    }
    return r;
}

int main(){
    int N, Q;
    cin >> N >> Q;
    vector<vector<int>> query(Q,vector<int>(2));
    rep(i,Q){
        cin >> query[i][0] >> query[i][1];
        query[i][0] %= 2;
        --query[i][1];
    }
    set<P> cross;
    cross.insert( make_pair(N-1,N-1) );
    ll black = ll(N-2)*ll(N-2);
    rep(i,Q){
        P add;
        if( query[i][0] == 0 ) add = make_pair( query[i][1], 0 );
        if( query[i][0] == 1 ) add = make_pair( 0, query[i][1] );
        P milestone = min_point( query[i][0], add, cross, N ); // cross point of line including "add" & that including endpoint to flip
        //cout << "before" << milestone.first << " " << milestone.second << endl;
        if( query[i][0] == 0 ){
            black -= milestone.first - 1;
            milestone.second = query[i][1];
        }
        else{
            black -= milestone.second - 1;
            milestone.first = query[i][1];
        }
        cross.insert(milestone);
    }
    cout << black << endl;
    return 0;
}