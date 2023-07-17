#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    vector<int> bs(h), be(h);
    rep(i,h){
        for( int j=1; j<w-1; ++j ){
            if(s[i][j-1]=='.' and s[i][j]=='#' ) bs[i] = j;
            if(s[i][j]=='#' and s[i][j+1]=='.' ) be[i] = j;
        }
    }
    int ans = 0;
    if(be[0]-bs[0]>0) ++ans;
    int ds=bs[1]-bs[0],de=be[1]-be[0];
    for( int i=2; i<h; ++i ){
        int ds2=bs[i]-bs[i-1],de2=be[i]-be[i-1];
        if(ds2!=ds) ++ans;
        if(de2!=de) ++ ans;
        ds=min(ds,ds2);de=min(de,de2);
    }
    if(be[h-1]-bs[h-1]>0) ++ans;
    cout << ans << endl;
    return 0;
}
