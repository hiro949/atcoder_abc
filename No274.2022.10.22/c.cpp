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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
        --a[i];
    }
    vector<int> ans(2*n+1);
    vector<bool> ameba(2*n+1,false);
    ans[0]=0; ameba[0]=true;
    rep(i,n)if(ameba[a[i]]){
            ameba[a[i]]=false;
            if(!ameba[2*i+1]) ans[2*i+1] = ans[a[i]]+1;
            if(!ameba[2*i+2]) ans[2*i+2] = ans[a[i]]+1;
            ameba[2*i+1]=true;
            ameba[2*i+2]=true;
    }
    for( int x : ans) cout << x << " ";
    cout << endl;
    return 0;
}