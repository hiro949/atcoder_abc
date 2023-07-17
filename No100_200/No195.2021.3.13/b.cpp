#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    int a,b,w;
    cin >> a >> b >> w;
    w*=1000;
    int amax = 1;
    int amin = w;
    int cnt = 0;
    for( int x=1; x<=w; ++x ){
        if(w <= b*x and w >=a*x){
            ++cnt;
            amax = max(amax,x);
            amin = min(amin,x);
        }
    }
    if(cnt==0){
        cout << "UNSATISFIABLE" << endl;
        return 0;
    }
    cout << amin << " " << amax << endl;
    return 0;
}