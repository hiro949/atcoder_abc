#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
// #t-#s>need

int score(string hand){
    int ans = 0;
    vector<int> c(10,0);
    for( char h : hand ) ++c[h-'0'];
    for( int i=1;i<=9; ++i ){
        int tmp = 1;
        rep(j,c[i]) tmp *= 10;
        ans += i*tmp;
    }
    return ans;
}

int main(){
    int k;
    string s,t;
    cin >> k >> s >> t;
    vector<ll> deck(10,k);
    int taka=0,aoki=0;
    rep(i,4){
        --deck[s[i]-'0'];--deck[t[i]-'0'];
    }
    ll count = 0;
    for( int x=1; x<=9; ++x ){
        for( int y=1; y<=9; ++y ){
            s[4]='0'+x; t[4]='0'+y;
            if(score(s)>score(t)){
                if(x!=y) count += deck[x]*deck[y];
                if(x==y) count += deck[x]*(deck[x]-1);
            }
        }
    }
    ll w = 9*k-8;
    double ans = (double)count/w/(w-1);
    printf( "%.10f\n", ans );
    return 0;
}