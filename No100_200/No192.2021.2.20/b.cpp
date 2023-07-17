#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    string s;
    cin >> s;
    rep(i,s.size()){
        if(i%2==0 and s[i]-'0'<='Z'-'0'){
            cout << "No" << endl;
            return 0;
        }
        if(i%2==1 and s[i]-'0'>'Z'-'0'){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}