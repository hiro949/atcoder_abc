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

int main(){
    int n,k;
    cin >> n >> k;
    vector<P> psum;
    int p1,p2,p3;
    rep(i,n){
        cin >> p1 >> p2 >> p3;
        psum.emplace_back(-(p1+p2+p3),i);
    }
    sort(psum.begin(),psum.end());
    vector<int> rank(n,n),score(n);
    rep(i,n) score[i] = psum[i].first;
    int x=0,xn=0;
    rep(i,n){
        x = lower_bound(score.begin(),score.end(),score[i]-300)- score.begin();
        rank[psum[i].second]=x+1;
    }
    rep(i,n){
        if(rank[i]<=k) cout << "Yes" << endl;
        else{ cout << "No" << endl;}
    }
    return 0;
}
