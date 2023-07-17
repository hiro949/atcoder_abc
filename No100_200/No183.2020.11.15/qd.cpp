#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

template<typename T> // datatype T
struct BIT{
    int n;
    vector<T> d;
    BIT(int n=0):n(n),d(n+1) {}
    void add( int i, T x=1 ){
        for( i++; i <= n; i += i&-i ){  //i&-i: Least significant bit
            d[i] += x;
        }
    }
    // get result
    T sum( int i ){
        T x=0;
        for( i++; i; i -= i&-i ){
            x +=d[i];
        }
        return x;
    }
    T sum( int l, int r ){
        return sum(r-1)-sum(l-1);
    }
};

int main(){
    int n,w;
    cin >> n >> w;
    vector<int> s(n),t(n),p(n);
    rep(i,n){
        cin >> s[i] >> t[i] >> p[i];
    }
    vector<ll> amount(1+2e5,0);
    rep(i,n){
        for( int x=s[i]; x<t[i]; ++x ){
            amount[x] += p[i];
        }
    }
    rep(i,amount.size()){
        if( amount[i] > w ){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}

