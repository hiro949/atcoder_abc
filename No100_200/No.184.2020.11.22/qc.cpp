#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

//(a,b)=>(c,d)
// a-c = d-b
//a-c = b-d
// |a-c|+|b-d|<=3
//=>
// d1 = |d2| or |d1|+|d2|<=3

int main(){
    int r1,c1,r2,c2;
    cin >> r1 >> c1 >> r2 >> c2;
    int d1 = r2-r1,d2=c2-c1;
    int step = 0;
    while( abs(d1) + abs(d2) >0 ){
        int e1 = d2-d1;
        int e2 = d2+d1;
        int 
        ++step;
    }
