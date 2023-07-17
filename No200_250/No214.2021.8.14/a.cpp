#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    int n;
    cin >> n;
    if(n<=125){
        cout << 4 << endl;
        return 0;
    }
    if(n<=211){
        cout << 6 << endl;
        return 0;
    }
    cout << 8 << endl;
    return 0;
}