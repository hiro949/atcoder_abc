#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

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

int solve( int n, int k, vector<int> &w, vector<int> &v, vector<int> &x ){
    int bit = (1<<k)-1; // all of 0,1,2,...,n-1 digit flagged
    for( ; bit<1<<n; bit = next_combination(bit) ){ // 1<<n: nth digit flagged (=100...0)
        vector<int> S;
        get_subset( bit, n, S );
        rep(i,k)
        
    }
    return ;
}

int main(){
    int n,m,q;
    vector<int> w(n),v(n),x(m),ans(q);
    rep(i,n) cin >>w[i] >> v[i];
    rep(i,m) cin >> x[i];
    sort(x.begin(),x.end());

    rep(i,q){
        int l,r;
        cin >> l >> r;
        --l;--r;
        vector<int> xq(0);
        rep(i,m){
            if(i<l or i>r ) xq.push_back(x[i]);
        }
        ans[i] = solve(n,m-r+l-1,w,v,xq);
    }
    rep(i,q) cout << ans[i] << " ";
    cout << endl;
    return 0;
}