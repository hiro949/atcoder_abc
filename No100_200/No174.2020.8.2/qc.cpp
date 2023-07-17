#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    //input
    int K;
    cin >> K;
    set<int> s;     // unique list of remainders for j<n
    int a = 7%K;    // treat only remainders
    // variations of remainder is K types at most
    for( int i=1; i<=K+1; i++ ){
        if( a == 0 ){
            //a_i is multiple of K
            cout << i << endl;
            break;
        }
        if( s.count(a) == 0 ){
            // a is a new remainder
            s.insert(a);
        }else{
            // a is same as one of the previous remainders
            // => loop
            // => impossible: a == 0
            cout << -1 << endl;
            break;
        }
        // a_n = 77...7 => recurrence formula a_n+1 = 10*a_n + 7
        a = (10*a + 7)%K; // calc a_n+1 mod K
    }
    return 0;
}