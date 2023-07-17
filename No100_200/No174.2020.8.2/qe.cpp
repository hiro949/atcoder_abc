#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

// judge possibility: all logs are cut into less than Lmax within K steps
bool OK_cut_less_than( int Lmax, int K, vector<int> &a ){
    int count =0;
    for( int l : a ){
        count += (l-1)/Lmax; 
        // cut of a log s.t. max length is minimum => equal division
        // (l-1)/Lmax = number of cutting points
        // ****** be careful *******
        // if l=Lmax: not need to cut => use l-1 
    }
    return count <= K;
}
    
int bisec_min( int &small, int &large, int K, vector<int> &a ){
    if( large - small <= 1 ){   // detect min Lmax
        return large;           // output should be rounded up (take "large")
    }
    int middle = ( small + large  )/2;              // "int": consistent with round-up output
    if( OK_cut_less_than( middle, K, a ) ){         // search Lmax < middle 
        return bisec_min( small, middle, K, a );
    }else{                                          // search Lmax > middle
        return bisec_min( middle, large, K, a );
    };
}

int main(){
    // input
    int N,K;
    cin >> N >> K;
    vector<int> a(N);
    rep(i,N) cin >> a[i];
    //bisectial minimization
    int small = 0;
    int large = *max_element( a.begin(), a.end() );
    int Lopt = bisec_min( small, large, K, a );
    //output
    cout << Lopt << endl;
    return 0;
}
