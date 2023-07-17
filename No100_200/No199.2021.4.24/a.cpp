#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int x = a*a+b*b-c*c;
    if(x<0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}