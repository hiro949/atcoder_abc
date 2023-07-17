#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

void color_variation( vector<int> &c ){
    if( c.size() <=1 ) return;
    int pivot = c.size()/2;
    vector<int> left(pivot), right( c.size() -pivot );
    copy(c.begin(), c.begin()+pivot, left.begin());
    copy(c.begin()+pivot, c.end(), right.begin());
    color_variation( left );
    color_variation( right );
    c.resize(left.size());
    copy(left.begin(), left.end(), c.begin());
    for( int ri : right ){
        int unique = true;
        for( int li : left ){
            if( ri == li ){
                unique = false;
                break;
            }
        }
        if( unique ) c.push_back(ri);
    }
    return;
}

int main(){
    //input
    int N,Q;
    cin >> N >> Q;
    vector<int> c(N), l(Q),r(Q);
    rep(i,N) cin >> c[i];
    rep(q,Q) cin >> l[q] >> r[q]; // l, r = 1,2,...,Q
    for( int q=0; q<Q; q++ ){
        int size = r[q]-l[q]+1;
        vector<int> cq(size);
        copy(c.begin()+l[q]-1, c.begin()+r[q], cq.begin());
        color_variation( cq );
        cout << cq.size() << endl;
    }
    return 0;
}