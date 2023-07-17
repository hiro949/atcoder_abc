#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
// greedy => put from left box ( ball #i with smallest r[i] )

void job(){
    int n;
    cin >> n;
    vector<P> sec(n);
    rep(i,n){
        cin >> sec[i].first >> sec[i].second;
    }
    sec.emplace_back(inf,inf); //sentinel
    sort(sec.begin(),sec.end());
    priority_queue<int,vector<int>,greater<int>> q; // r[i] where l[i]<piv
    int piv=1; //now
    for( auto p : sec ){
        int l=p.first, r=p.second;
        while( piv<l and !q.empty() ){
            if(q.top()<piv){
                cout << "No" << endl;
                return;
            }
            q.pop(); ++piv;
        }
        piv=l; q.push(r);
    }
    cout << "Yes" << endl;
    return;
}

int main(){
    int t;
    cin >> t;
    rep(i,t) job();
    return 0;
}