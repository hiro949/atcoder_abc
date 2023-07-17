#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int n;
    cin >> n;
    vector<int> s(n),t(n),flag(n,inf);
    rep(i,n) cin >> s[i];
    rep(i,n) cin >> t[i];
    priority_queue<P,vector<P>,greater<P>> q;
    rep(i,n) q.emplace(t[i],i);
    while(!q.empty()){
        int x=q.top().first,id=q.top().second; q.pop();
        if( flag[id]>x ){
            flag[id] = x;
            q.emplace(x+s[id],(id+1)%n);
        }
    }
    for( int x : flag ) cout << x << endl;
    return 0;
}
