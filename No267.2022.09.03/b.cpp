#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int main(){
    string s;
    cin >> s;
    if(s[0]!='0'){
        cout << "No" << endl;
        return 0;
    }
    vector<int> line(7,0);
    line[0] = s[6]-'0';
    line[1] = s[3]-'0';
    line[2] = (s[7]-'0') + (s[1]-'0');
    line[3] = (s[4]-'0') + (s[0]-'0');
    line[4] = (s[8]-'0') + (s[2]-'0');
    line[5] = s[5]-'0';
    line[6] = s[9]-'0';
    int l=7,r=0;
    rep(i,7){
        if(line[i]>0){
            l=i;
            break;
        }

    }
    rep(i,7){
        if(line[6-i]>0){
            r=6-i;
            break;
        }
    }
    if(l>=r){
        cout << "No" << endl;
        return 0;
    }
    for( int i=l+1; i<r; ++i)if(line[i]==0){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}