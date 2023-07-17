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
    int n,m;
    cin >> n >> m;
    vector<int> d(n);
    rep(i,n) cin >> d[i];
    dsu G(n);
    int a,b;
    rep(i,m){
        cin >> a >> b;--a;--b;
        G.merge(a,b); --d[a]; --d[b];
    }
    for( int x : d )if(x<0){
        cout << -1 << endl;
        return 0;
    }
    stack<int> st;
    for( auto g : G.groups() ){
        int res=0;
        for( int v : g ) res += d[v];
        st.push(res);
    }
    while(st.size()>1){
        int c1=st.top(); st.pop();
        int c2=st.top(); st.pop();
        int c = c1+c2-2;
        if(c<0 or c1==0 or c2==0 ){
            cout << -1 << endl;
            return 0;
        }
        st.push(c);
    }
    if( st.top()!=0 ){
        cout << -1 << endl;
        return 0;
    }
    //find route
    int ng = (G.groups()).size();
    priority_queue<P> q;
    for( auto g : G.groups() ){
        int iv=0,dmax=0;
        for( int v : g )if(d[v]>dmax){
            dmax=d[v],iv=v;
        }
        q.emplace(dmax,iv);
    }
    vector<P> route;
    while(q.size()>1){
        cout << q.size() << endl;
        P v1=q.top(); q.pop();
        P v2=q.top(); q.pop();
        --v1.first;--v2.first;--d[v1.second];--d[v2.second];
        route.emplace_back(v1.second,v2.second);
        if(v1.first>0) q.push(v1);
        if(v2.first>0) q.push(v2);
    }
    deque<int> dq;
    rep(i,n)if(d[i]>0) dq.push_front(i);
    while(dq.size()>1){
        int i1=dq.front();dq.pop_front();
        int i2=dq.front();dq.pop_front();
        route.emplace_back(i1,i2);
        --d[i1];--d[i2];
        if(d[i1]>0) dq.push_back(i1);
        if(d[i2]>0) dq.push_back(i2);
    }
    for( P p : route ){
        cout <<p.first << " " << p.second << endl;
    }
    return 0;
}