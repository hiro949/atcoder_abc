#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;


int main(){
    int n,w;
    cin >> n >> w;
    vector<P> query(0);
    rep(i,n){
        int s,t,p;
        cin >> s >> t >> p;
        query.push_back(make_pair(s,p));
        query.push_back(make_pair(t,-p));
    }
    // the amount of use water => @ s[i] => increase @ t[i] => decrease
    sort(query.begin(),query.end(),[](const P &lh, const P rh){ return lh.first<rh.first; } );
    vector<ll> use_log(0); // log of the amount of used water when it changed
    int ti=query[0].first;
    ll amount = query[0].second;
    for( int i=1; i<query.size(); ++i ){
        if( query[i].first>ti ){
            use_log.push_back(amount);
            ti = query[i].first;
        } 
        amount += query[i].second;
    }
    // last amount is always =0 so don't have to save
    int count = 0;
    for( ll am : use_log ){
        if(am>w){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}

