#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
std::vector<std::vector<long long>> pascal(61,std::vector<long long>(61, 0));

void comb_init() {
    for (int i = 0; i < pascal.size(); i++) {
        pascal[i][0] = 1;
        pascal[i][i] = 1;
    }
    for (int j = 1; j < pascal.size(); j++) {
        for (int k = 1; k < j; k++) {
        pascal[j][k] = (pascal[j - 1][k - 1] + pascal[j - 1][k]);
        }
    }
  return;
}

int main(){
    comb_init();
    int a,b;
    ll k;
    cin >> a >> b >> k;
    string ans = string(a+b,'a');
    while(b>0){
        for( int x=a+b-1; x>=b; --x ){
            if( pascal[x][b] < k ){
                ans[x] = 'b';
                k -= pascal[x][b];
                --b;
                break;
            }
        }
    }
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
    return 0;
}
