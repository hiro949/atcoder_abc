#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

// sum(i)sum(j=0;j<i-1)(ai-aj)^2 = 1/2[2Nsum(i)Ai^2 - 2(sum(i)Ai)^2] 

int main(){
    int n;
    cin >> n;
    ll asum = 0,asum2 = 0;
    rep(i,n){
        int ai;
        cin >> ai;
        asum2 += ai*ai;
        asum += ai;
    }
    cout << n*asum2 - asum*asum << endl;
    return 0;
}