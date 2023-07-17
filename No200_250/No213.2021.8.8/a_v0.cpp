#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

// b-a = c-a
// a-(a&b) = a&c

int main(){
    int a,b;
    cin >> a >> b;
    int c = (b&(~a))|(a&(~(a&b)));
    cout << c << endl;
    return 0; 
}

