#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n;
    vector<int> a(n),asum(n),asumsum(n);
    rep(i,n){
        cin >> a[i];
        if(i==0){
            asum[i] = a[i];
            asumsum[i] = asum[i];
        }
        else{
            asum[i] = a[i] + asum[i-1];
            asumsum[i] = asum[i-1] + asum[i];
        }
    }
    rep(i,n) cout << asum[i] << " ";
    cout << endl;
    rep(i,n) cout << asumsum[i] << " ";
    int asum_max= *max_element(asum.begin(),asum.end());
    int asumsum_max= *max_element(asumsum.begin(),asumsum.end()-1);
    cout << asum_max + asumsum_max << endl;
    return 0;
}
