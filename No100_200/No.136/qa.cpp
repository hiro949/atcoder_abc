#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int A,B,C;
    cin >> A >> B >> C;
    int C2 = max(C - A + B,0);
    cout << C2 << endl;
    return 0;
}