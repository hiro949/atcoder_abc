#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max()/2;

int main(){
    int a,b;
    cin >> a >> b;
    if(a%3==b%3 and b == a + 3 ){
        cout << "Yes" << endl;
        return 0;
    }
    if(b-a<3 and b == a + 1){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}