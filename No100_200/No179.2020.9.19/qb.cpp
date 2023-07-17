#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int N;
    cin >> N;
    int count = 0;
    rep(i,N){
        int d1,d2;
        cin >> d1 >> d2;
        if( d1 == d2 ){
             ++count;
            if( count >= 3 ){
                cout << "Yes" << endl;
                return 0;
            }
        }
        else count = 0;
    }
    cout << "No" << endl;
    return 0;
}