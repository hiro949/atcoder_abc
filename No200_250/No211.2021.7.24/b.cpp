#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

string s_ref[4] = {"H","2B","3B","HR"};

int main(){
    string s[4];
    bool flag[4];
    rep(i,4){
        cin >> s[i];
        flag[i]=false;
    }
    rep(i,4)rep(j,4){
            if(s[j]==s_ref[i]) flag[i]=true;
    }
    rep(i,4){
        if(!flag[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
