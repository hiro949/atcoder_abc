#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n;
    set<string> s,s2;
    rep(i,n){
        string si;
        cin >> si;
        if( si[0] != '!' ) s.insert(si);
        else s2.insert(si);
    }
    for( string si : s ){
        if(s2.count('!' + si)>0){
            cout << si << endl;
            return 0;
        }
    }
    cout << "satisfiable" << endl;
    return 0;
}
