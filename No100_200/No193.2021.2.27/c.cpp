#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main(){
    long n;
    cin >> n;
    set<long> s;
    for( long a=2;a*a<=n;++a){
        long tmp = a*a;
        if( s.count(tmp)==0 ){
            while(tmp<=n){
                tmp*=a;
                s.insert(tmp);
            }
        }
    }
    cout <<  -s.size()+n << endl;
    return 0;
}