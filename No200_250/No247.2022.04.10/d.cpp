#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<ll,ll>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int main(){
    int Q;
    cin >> Q;
    deque<P> q; 
    int type;
    ll x,c;
    rep(iq,Q){
        cin >> type;
        if(type==1){
            cin >> x >> c;
            q.emplace_back(x,c);
        }else{
            cin >> c;
            ll score=0;
            while(c>0){
                P p=q.front();q.pop_front();
                ll num=min(c,p.second);
                score += num*p.first;
                c -=num; p.second -=num;
                if(p.second>0) q.push_front(p);
            }
            cout << score << endl;
        }
    }
    return 0;
}