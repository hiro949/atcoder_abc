#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main()
{
    int n,m,k;
    cin >> n >> m;
    vector<int> a(m),b(m);
    rep(i,m){
        cin >> a[i] >> b[i];
        --a[i];--b[i];
    }
    cin >> k;
    vector<int> c(k),d(k);
    rep(i,k){
        cin >> c[i] >> d[i];
        --c[i];--d[i];
    }
    int ans = 0;
    for( int bit=0; bit<1<<k; ++bit){ // 1<<n: nth digit flagged
        vector<int> ball(n,0);
        for(int i=0; i<k; ++i){
            if(bit&(1<<i)) ++ball[c[i]];
            else ++ball[d[i]];
        }
        int count = 0;
        rep(i,m){
            if( ball[a[i]]>0 and ball[b[i]]>0 ) ++count;
        }
        ans = max(ans,count);
    }
    cout << ans << endl;
    return 0;
}
