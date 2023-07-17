#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n,q;
    string s;
    cin >> n >> s >> q;
    string s1,s2;
    s1 = s.substr(0,n); s2 = s.substr(n,2*n);
    rep(i,q){
        int t,a,b;
        cin >> t >> a >> b; --a; --b;
        if(t==2) swap(s1,s2);
        else{
            if(b<n) swap(s1[a],s1[b]);
            else if(a>=n) swap(s2[a-n],s2[b-n]);
            else swap(s1[a],s2[b-n]);
        }
    }
    cout << s1+s2 << endl;
    return 0;
}
