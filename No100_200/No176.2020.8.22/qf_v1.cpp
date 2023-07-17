#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int check_dupli( set<int> &s, vector<int> &A, vector<int> &nA ){
    vector<vector<int>> trio(10,vector<int>(3));
    int i=0;
    for( int p=0; p<5; p++ ){
        for( int q=p+1; q<5; q++ ){
            for( int r=q+1; r<5; r++ ){
                trio[i] = {p,q,r};
            }
        }
    }
    vector<vector<int>> G(5);
    vector<int> nG(5);
    for( int p=0; p<5; p++ ){
        for( int q=p+1; q<5; q++ ){
            if( A[p] == A[q] ) G[p].push_back(q);G[q].push_back(p);
        }
    }
    rep(i,5){
        if( nG[i] >2 ){
            rep(j,3) s.insert(G[i][j]);
            return 1;
        }
    }
    rep(i,5){
        if( nA[A[i]]%3 > 0 and s.size()<3 ) s.insert(i);
    }
    for( int l = 3-s.size(); l>0; i-- ){
        rep(i,5){
            if( nG[i] == l ){
                for(int j: G[i] ){
                    if( s.size()<3 ) s.insert(i);
                }
            }
        }
    }
    return 0;
}


int main(){
    int N;
    cin >> N;
    vector<int> nA(N,0);
    deque<int> A;
    rep(i,3*N){
        int a;
        cin >> a;
        A.push_back(a);
        ++nA[a];
    }
    int ans = 0;
    while( A.size() > 3 ){ // ~O(N)
        vector<int> At(5);
        rep(i,5){
             At[i] = A.front();
             A.pop_front();
        }
        set<int> s;
        ans += check_dupli(s,At,nA);
        cout<< ans << endl;
        rep(i,5){
             if( s.count(i) == 0 ){
                 A.push_front(At[i]);
             }else{
                 --nA[At[i]];
             }
        }
    }
    if( A[0] == A[1] and A[1] == A[2] ) ++ans;
    cout << ans << endl;
    return 0;
}
