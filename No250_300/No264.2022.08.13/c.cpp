#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int next_combination( int sub ){
    int x = sub & -sub, y = sub+x;
    return (((sub&~y)/x)>>1)|y;
}

void get_subset( int bit, int n, vector<int> &S ){
    for(int i=0; i<n; ++i){
        if(bit&(1<<i)) S.push_back(i);
    }
    return;
}

int main(){
    int h1,w1,h2,w2;
    cin >> h1 >> w1;
    vector<vector<int>> a(h1,vector<int>(w1));
    rep(i,h1)rep(j,w1) cin >> a[i][j];
    cin >> h2 >> w2;
    vector<vector<int>> b(h2,vector<int>(w2));
    rep(i,h2)rep(j,w2) cin >> b[i][j];
    int bit_h = (1<<h2)-1; // all of 0,1,2,...,n-1 digit flagged
    for( ; bit_h<1<<h1; bit_h = next_combination(bit_h) ){ // 1<<n: nth digit flagged (=100...0)
        vector<int> Sh;
        get_subset( bit_h, h1, Sh );
        int bit_w = (1<<w2)-1; // all of 0,1,2,...,n-1 digit flagged
        for( ; bit_w<1<<w1; bit_w = next_combination(bit_w) ){ // 1<<n: nth digit flagged (=100...0)
            vector<int> Sw;
            get_subset( bit_w, w1, Sw );
            bool tf = true;
            rep(i,h2)rep(j,w2)if( b[i][j] != a[Sh[i]][Sw[j]] ){
                tf = false;
                break;
            }
            if(tf){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl; 
    return 0;
}