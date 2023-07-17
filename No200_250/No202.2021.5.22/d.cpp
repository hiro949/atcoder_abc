#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
const int n=30;
std::vector<std::vector<long long>> pascal(n+1,std::vector<long long>(n+1, 0));

void comb_init() {
    for (int i = 0; i <pascal.size(); i++) {
        pascal[i][0] = 1;
        pascal[0][i] = 1;
    }
    for(int ij = 1; ij <=2*pascal.size(); ij++)for(int j = 1; j <pascal.size(); j++){
        int i=ij-j;
        if( 0<i and i<pascal.size() ){
            pascal[i][j] = (pascal[i][j-1] + pascal[i-1][j]);
        }
    }
  return;
}

string kth_ab( int a, int b, ll k ){
    if(a==0) return string(b,'b');
    if(b==0) return string(a,'a');
    if(k<=pascal[a-1][b]) return 'a' + kth_ab(a-1,b,k);
    return 'b' + kth_ab(a,b-1,k-pascal[a-1][b]);
}

int main(){
    comb_init();
    int a,b;
    ll k;
    cin >> a >> b >> k;
    cout << kth_ab(a,b,k) << endl;
    return 0;
}