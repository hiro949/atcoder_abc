#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n,x;
    cin >> n >> x;
    int count = 0;
    rep(i,n){
        int v,p;
        cin >> v >> p;
        count += v*p;
        if(count>100*x){
            cout << i+1 <<endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
