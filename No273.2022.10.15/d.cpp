#include<bits/stdc++.h>
#include <atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
#define rep2(i,m,n) for ( int i=m; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max()/2;

int main(){
    int h,w,rs,cs,n,ri,ci;
    cin >> h >> w >> rs >> cs >> n;
    --rs;--cs;
    vector<set<int>> rWall(h),cWall(w);
    rep(i,h){
        rWall[i].insert(-1);
        rWall[i].insert(w);
    }
    rep(j,w){
        cWall[j].insert(-1);
        cWall[j].insert(h);
    }
    rep(i,n){
        cin >> ri >> ci;
        rWall[ri-1].insert(ci-1);
        cWall[ci-1].insert(ri-1);
    }
    int q,l,wall;
    char d;
    cin >> q;
    set<int>::iterator it;
    rep(iq,q){
        cin >> d >> l;
        if(d=='L'){
            it = rWall[rs].lower_bound(cs-l);
            wall = *(--it);
            cs = max(cs-l,wall+1);
        } 
        if(d=='R'){
            wall = *rWall[rs].upper_bound(cs+l);
            cs = min(cs+l,wall-1);
        }  
        if(d=='D'){
            it = cWall[cs].lower_bound(rs-l);
            wall = *(--it);
            rs = max(rs-l,wall+1);
        }   
        if(d=='U'){
            wall = *cWall[cs].upper_bound(rs+l);
            rs = min(rs+l,wall-1);
        }
        //cout << d << " " << wall << " ";
        cout << rs+1 << " " << cs+1 << endl;
    }
    return 0;
}