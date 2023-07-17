#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    ll c1;
    cin >> n >> c1;
    vector<int> a(n),b(n),c2(n);
    rep(i,n){
        int ai,bi,ci;
        cin >> a[i] >> b[i] >> c2[i];
        ++b[i]; //始めに統一
    }
    vector<P> change(0);
    rep(i,n) change.push_back(make_pair(a[i],c2[i]));
    rep(i,n) change.push_back(make_pair(b[i],-c2[i]));
    sort(change.begin(),change.end(),[](const P& lh, const P& rh) {
        return rh.first > lh.first; });
    ll ans = 0;
    int count = 0;
    int today = 0,next_day;
    ll pay = 0;
    while(count<2*n){
        while(today == change[count].first ){
            pay += change[count].second;
            ++count;
        }
        if(count<2*n) next_day = change[count].first;
        else break;
        //cout << next_day << " " << today << " " << min(c1,pay) << endl;
        ans += min(c1,pay)*(next_day - today);
        today = next_day;
    }
    cout << ans << endl;
    return 0;
}