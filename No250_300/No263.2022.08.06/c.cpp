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

void get_subset( ll bit, int n, vector<int> &S ){
    for(int i=0; i<n; ++i){
        if(bit&(1<<i)) S.push_back(i);
    }
    return;
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> v;
    ll bit = (1<<n)-1; // all of 0,1,2,...,n-1 digit flagged
    for( ; bit<1<<m; bit = next_combination(bit) ){ // 1<<n: nth digit flagged (=100...0)
        vector<int> S;
        get_subset( bit, m, S );
        v.push_back(S);
    }
    sort(v.begin(),v.end());
    for( auto vi : v ){
        for( int x : vi ) cout << x+1 << " ";
        cout << endl;
    }
    return 0;
}