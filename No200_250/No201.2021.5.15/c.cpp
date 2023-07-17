#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

int main(){
    string s;
    cin >> s;
    int ans = 0;
    set<int> s0;
    rep(i,10){
        if(s[i]=='o') s0.insert(i);
    }
    for(int i1=0;i1<=9;++i1)for(int i2=0;i2<=9;++i2)for(int i3=0;i3<=9;++i3)for(int i4=0;i4<=9;++i4){
        if(s[i1]=='x' or s[i2]=='x' or s[i3]=='x' or s[i4]=='x') continue;
        set<int> s_tmp;
        s_tmp.insert(i1);s_tmp.insert(i2);s_tmp.insert(i3);s_tmp.insert(i4);
        bool tf = true;
        for( int i : s0 ){
            if(s_tmp.count(i)==0) tf=false;
        }
        if(!tf) continue;
        ++ans;
    }
    cout << ans << endl;
    return 0;
}

