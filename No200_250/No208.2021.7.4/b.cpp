#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();
vector<int> fact(11);

void fact_init(){
    fact[0]=1;
    for( int i=1; i<=10; ++i ){
        fact[i]= i*fact[i-1];
    }
    return;
}

int main(){
    int p;
    cin >> p;
    fact_init();
    int ans = 0, id=10, cnt = 0;
    while(p>0 and id>0){
        if(p<fact[id] or cnt>=100){
            cnt = 0; --id;
            continue;
        }
        p -= fact[id]; ++ans;
    }
    cout << ans << endl;
    return 0;
}