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
    n*=108;
    n/=100;
    if(n<206) cout << "Yay!" << endl;
    else if (n==206) cout << "so-so" << endl;
    else cout << ":(" << endl;
    return 0;
}
