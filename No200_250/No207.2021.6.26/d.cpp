#include<bits/stdc++.h>
#include<atcoder/all>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
const int inf = numeric_limits<int>::max();

struct pos{
    int x,y;
    bool operator==(const pos &b) {
        return x==b.x and y==b.y;
    }
    pos operator+(const pos &b) {
        pos a;
        a.x = x + b.x;  // ここではint型の+演算子が呼ばれる
        a.y = y + b.y;  // ここではstring型の+演算子が呼ばれる
        return a;
    }
    pos operator-(const pos &b) {
        pos a;
        a.x = x - b.x;  // ここではint型の+演算子が呼ばれる
        a.y = y - b.y;  // ここではstring型の+演算子が呼ばれる
        return a;
    }
    pos operator*(const pos &b) {
        pos a;
        a.x = x*b.x;  // ここではint型の+演算子が呼ばれる
        a.y = y*b.y;  // ここではstring型の+演算子が呼ばれる
        return a;
    }
};

// p & (1,0) => cos= p.x, sin = p.y
// <p1 < <p2 ?
bool comp_ccw( pos p1, pos p2 ){
    double nrm1 = sqrt(p1.x*p1.x + p1.y+p1.y);
    double nrm2 = sqrt(p2.x*p2.x + p2.y+p2.y);
    if(p1.y*p2.y<0){
        if(p1.y>0) return true;
        return false;
    }
    if(p1.y*p2.y>0){
        if(p1.y>0) return nrm2*p1.x > nrm1*p2.x;
        return nrm2*p1.x < nrm1*p2.x;
    }
    if(p1.y>0) return p2.x<0;
    if(p2.y>0) return p1.x>0;
    if(p1.y<0) return false;
    if(p2.y<0) return true;
    return p1.x>p2.x;
}

int main(){
    int n;
    cin >> n;
    vector<pos> s(n),t(n);
    rep(i,n) cin >> s[i].x >> s[i].y;
    rep(i,n) cin >> t[i].x >> t[i].y;
    pos sg={0,0},tg={0,0},pos_n={n,n};
    rep(i,n){
        sg = sg + s[i]; tg = tg + t[i];
    }
    // xn & match center of mass
    rep(i,n){
        s[i] = pos_n*s[i] - sg;
        t[i] = pos_n*t[i] - tg;
    }
    sort(s.begin(),s.end(),comp_ccw);
    sort(t.begin(),t.end(),comp_ccw);
    vector<double> ang_s(n),ang_t(n);
    rep(i,n){
        ang_s[i] = atan2(s[i].y,s[i].x);
        ang_t[i] = atan2(t[i].y,t[i].x);
    }
    rep(i,n){
        double d = ang_s[i] - ang_t[0];
        bool ok = true;
        rep(j,n){
            if( abs( ang_s[(i+j)%n] - d -ang_t[j] ) > 1e-6 ){
                ok=false;
                break;
            }
        }
        if(ok){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
