#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int count_in_rectangular( int xmin, int xmax, int ymin, int ymax ,vector<P> &S ){
    int count = 0;
    for( P p : S ){
        bool xin = xmin <= p.first and p.first <= xmax;
        bool yin = ymin <= p.second and p.second <= ymax;
        if( xin and yin ) ++count;
    }
    return count;
}

void merge_T( vector<int> &T1, vector<int> &T2, vector<int> &T ){
    T[0] = min( T1[0], T2[0] );
    T[1] = max( T1[1], T2[1] );
    T[2] = min( T1[2], T2[2] );
    T[3] = max( T1[3], T2[3] );
    return;
}

int main(){
    int N;
    cin >> N;
    vector<P> S;
    rep(i,N) cin >> S[i].first >> S[i].second;
    int q = 998244353;
    vector<int> T(4); // xmin, xmax, ymin, ymax
    
}
