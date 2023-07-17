#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll func( ll x, ll m ){
    return (x*x)%m;
}

int main(){
    ll n;
    ll x,m;
    cin >> n >> x >> m;
    vector<ll> ar(0);
    ar.push_back(x);
    ll ai = func(x%m,m);
    while( count(ar.begin(),ar.end(),ai) == 0 ){
        ar.push_back(ai);
        ai = func(ai%m,m);
    }
    int i_start = 0;
    rep(i,ar.size()){
        if( ai == ar[i] ){
            i_start = i;
            break;
        }
    }
    ll sum0 = 0;
    rep(i,i_start){
        sum0 += ar[i];
        --n;
    }
    }
    int rpt = n/( ar.size() - i_start );
    ll rest = 0;
    rep( i, n%(ar.size() - i_start) ) rest += ar[i];
    sort(ar.begin(),ar.end());
    ll sum_rep = 0;
    for( int i=i_start; i<ar.size(); ++i ) sum_rep += ar[i];
    vector<ll> sum{sum0,rest,rpt*sum_rep};
    sort(sum.begin(),sum.end());
    cout << sum[0] + sum[1] + sum[2] << endl;
    return 0;
}
