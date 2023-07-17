#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int a,b;
    cin >> a >> b;
    double c = a+2.*b;
    c/=3.;
    printf("%f",c);
    return 0;
}