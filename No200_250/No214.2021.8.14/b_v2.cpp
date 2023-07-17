#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int s,t,cnt=0;
    cin >> s >> t;
    for( int a=0; a<=s; ++a )for( int b=0; a+b<=s; ++b )for( int c=0; a+b+c<=s; ++c ){
        if(a*b*c<=t) ++cnt;
    }
    cout << cnt << endl;
    return 0;
}
