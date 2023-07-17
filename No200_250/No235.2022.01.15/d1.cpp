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

int a,n;
vector<int> flag(1e6+1,inf);

// if x/a or x:rotate made from 1 
int f( int x ){
    if(x>1e6) cout << "err" << endl;
    if(flag[x]!=inf) return flag[x];
    if(x==1){
        flag[x]=0;
        return 0;
    }
    int y=1;
    while(x<10*y) y*=10;
    int t1,t2;
    if(x%a!=0) t1=inf;
    else t1= f(x/a);
    if(x<10 or x%10==0) t2=inf;
    else t2= f(x%y*10 + x/y);
    int ans = min(t1,t2)+1;
    flag[x]=ans;
    return ans;
}

int main(){
    cin >> a >> n;
    int ans = f(n); 
    if(ans == inf) ans = -1;
    cout << ans << endl;
    return 0;
}