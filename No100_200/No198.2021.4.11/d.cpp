#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    vector<string> s(3);
    cin >> s[0] >> s[1] >> s[2];
    map< char, ll > mp;
    set<char> heads;
    rep(i,3){
        heads.insert(s[i][0]);
        reverse(s[i].begin(),s[i].end());
        ll co = 1;
        if(i==2) co =-1;
        for( char c : s[i] ){
            mp[c] += co;
            co *=10;
        }
        reverse(s[i].begin(),s[i].end());
    }

    vector<int> p(10);
    iota(p.begin(),p.end(),0);
    do{
        int i=0;
        ll tot = 0;
        for( auto x : mp ){
            char c = x.first;
            ll co = x.second;
            tot += co*p[i];
            ++i;
        }
        if( tot == 0 ){
            i = 0;
            for( auto x : mp ){
                x.second = p[i];
                if(  )
                ++ i;
            }
            rep(i,3){
                ll x = 0;
                for( char c : s[i] ){
                    x = x*10 + mp[c];
                }
                cout << x << endl;
            }
            return 0;
        }
    }while( next_permutation(p.begin(),p.end()));
    cout << "UNSOLVABLE" << endl;
    return 0;
}
