#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n,m,t;
    cin >> n >> m >> t;
    vector<int> cafe(m);
    int remain = n;
    int bp = 0;
    rep(i,m){
        int a,b;
        cin >> a >> b;
        remain -= a-bp;
        if(remain<=0){
            cout << "No" << endl;
            return 0;
        }
        remain =min(n,remain + b-a);
        bp = b;
    }
    if( remain - (t-bp) <= 0 ){
        cout << "No" << endl;
        return 0;    
    }
    cout << "Yes" << endl;
    return 0;
}