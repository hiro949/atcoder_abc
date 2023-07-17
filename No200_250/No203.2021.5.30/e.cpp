#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int n,m;
    cin >> n >> m;
    vector<P> p; // psition of black porns
    rep(i,m){
        int xi,yi;
        cin >> xi >> yi;
        p.push_back({xi,yi});
    }
    sort(p.begin(),p.end());
    set<int> s; s.insert(n); // possible position
    vector<int> a,b;
    int l=0,r;
    while(l<m){
        a.clear();b.clear();
        r=l;
        while(r<m){
            if(p[r].first==p[l].first) ++r;
            else break;
        }
        for( int i=l; i<r; ++i ){
            int y = p[i].second;
            bool tf_diag = (s.find(y-1) == s.end()) && (s.find(y+1) == s.end());
            bool tf_on = s.find(y) == s.end();
            if( !tf_diag and tf_on ) a.push_back(y);
            if( tf_diag and !tf_on ) b.push_back(y);
        }
        for( int ai : a ) s.insert(ai);
        for( int bi : b ) s.erase(bi);
    }
    cout << s.size() << endl;
    return 0;    
}
