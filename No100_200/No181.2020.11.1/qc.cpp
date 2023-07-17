#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n;
    vector<ll> x(n),y(n);
    rep(i,n){
        cin >> x[i] >> y[i]; 
    }
    rep(i,n){
        for( int j=i+1; j<n; ++j ){
            for( int k=j+1; k<n; ++k ){
                ll prdct = (x[k]-x[i])*(x[j]-x[i]) + (y[k]-y[i])*(y[j]-y[i]);
                ll norm1 = (x[k]-x[i])*(x[k]-x[i]) + (y[k]-y[i])*(y[k]-y[i]);
                ll norm2 = (x[j]-x[i])*(x[j]-x[i]) + (y[j]-y[i])*(y[j]-y[i]);
                if( prdct*prdct == norm1*norm2 ){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}