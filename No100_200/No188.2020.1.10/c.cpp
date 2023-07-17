#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;


int winner(int i0, int k, int n, vector<int> &a){
    if(k==0) return i0;
    int w1 = winner(i0, k-1, n, a);
    int w2 = winner(i0+pow(2,k-1), k-1, n, a);
    //int w = a[w1]>a[w2]? w1 : w2;
    //cout << a[w1] << " " << a[w2] <<  " " << w << endl;
    if(k==n) return a[w1]>a[w2]? w2 : w1;
    return a[w1]>a[w2]? w1 : w2;
}

int main(){
    int n;
    cin >> n;
    int size = pow(2,n);
    vector<int> a(size);
    rep(i,size) cin >> a[i];
    cout << winner( 0, n, n, a)+1 << endl;
    return 0;
}