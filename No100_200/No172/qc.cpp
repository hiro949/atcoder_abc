#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int N,M,K;
    cin >> N >> M >> K;
    queue<int> A,B;
    rep(i,N){
        int a;
        cin >> a;
        A.push(a);
    }
    rep(i,M){
        int b;
        cin >> b;
        B.push(b);
    }
    A.push(INT_MAX); B.push(INT_MAX);
    int count = 0;
    ll time = 0;
    rep(i,N+M){
        int ti;
        if( A.front()<B.front() ){
            ti = A.front();
            A.pop();
        }else{
            ti = B.front();
            B.pop();
        }
        time += ti;
        if( time<=K ) ++count;
        else break;
    }
    cout << count << endl;
    return 0;
}

