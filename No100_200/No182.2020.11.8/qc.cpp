#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;
// sum of each digit #


int main(){
    ll n;
    cin >> n;
    string sn = to_string(n);
    int k = sn.size();
    vector<int> dig(k);
    rep(i,k) dig[i] = (sn[i]-'0')%3;
    int n1 = count(dig.begin(),dig.end(),1);
    int n2 = count(dig.begin(),dig.end(),2);
    int r = (n1+2*n2)%3;
    if(r==0){
        cout << 0 << endl;
        return 0;
    }else if(r==1){
        if(n1>0 and k>1){
            cout << 1 << endl;
            return 0;
        }else if(k>2){
            cout << 2 << endl;
            return 0;
        }
    }else{
        if(n2>0 and k>1){
            cout << 1 << endl;
            return 0;
        }else if(k>2){
            cout << 2 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}