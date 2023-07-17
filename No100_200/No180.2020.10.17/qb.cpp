#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n;
    int dm=0, dc=0;
    double du = 0;
    vector<int> x_vec(n);
    rep(i,n){
        cin >> x_vec[i];
    }
    sort(x_vec.begin(),x_vec.end());
    for( int x: x_vec ){
        dm += abs(x);
        dc = max(dc,abs(x));
        du += x*x;
    }
    cout << dm << endl;
    cout << std::setprecision(15) << sqrt(du) << endl;
    cout << dc << endl;
    return 0;
}
