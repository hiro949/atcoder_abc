#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

void argsort( vector<P> &c ){
    if( c.size() <=1 ) return;
    P pivot = c[c.size()/2];
    vector<P> left(0), right(0);
    for( P p : c ){
        if( p.first > pivot.first ) left.push_back(p);
        else right.push_back(p);
    }
    argsort( left );
    argsort( right );
    copy(right.begin(),right.end(),back_inserter(left));
    return;
}

void check_all_color_variation( vector<int> &variation, vector<P> &c ){
    // c must be sorted
    int pivot = 0;
    int count = 0;
    for( P p : c ){
        if( pivot < p.first ){
            variation.push_back(count);
            count = 1;
            pivot = p.first;
        }else{
            count++;
        }
    }
    return;
}

void color_variation_for_query( vector<int> &output, vector<int> &l, vector<int> &r, vector<int> &variation, vector<P> &c ){
    int start = 0;
    int goal = 0;
    for( int n : variation ){
        goal += n;
        vector<int> count(l.size(),0);
        for( int i=start; i<goal; i++ ){
            for( int q=0; q<l.size(); q++ ){
                if( l[q] <= c[i].second && r[q] <= c[i].second ) count[q]++;
            }
        }
        for( int q=0; q<l.size(); q++ ){
            if( count[q]>0 ) output[q]++; 
        }
        start = goal;
    }
    return;
}

int main(){
    //input
    int N,Q;
    cin >> N >> Q;
    vector<P> c(N);
    vector<int>  l(Q),r(Q);
    rep(i,N){
        int ci=0;
        cin >> ci;
        c[i] = make_pair(ci,i);
    }
    rep(q,Q) cin >> l[q] >> r[q]; // l, r = 1,2,...,Q
    argsort(c);
    vector<int> variation(0);
    check_all_color_variation( variation, c );
    vector<int> output(Q,0);
    color_variation_for_query( output, l, r, variation, c );
    for( int n : output ){
        cout << "OK" << endl;
        cout << n << endl;
    }
    return 0;
}