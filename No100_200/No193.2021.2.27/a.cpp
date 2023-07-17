#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    int a,b;
    cin >> a >> b;
    cout << 100.*double(a-b)/double(a) << endl;
    return 0;
}