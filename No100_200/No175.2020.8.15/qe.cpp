#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

// prototype( w.o. restriction )
int max_total_score_proto( int x, int y, vector<vector<int>> &field ){
    if( x == 0 and y == 0 ){
        return field[0][0];
    }
    else if( x == 0 ) return max_total_score_proto( 0, y-1, field ) + field[0][y];
    else if( y == 0 ){
        return max_total_score_proto( x-1, 0, field ) + field[x][0];
    }
    int candid1 = max_total_score_proto( x, y-1, field );
    int candid2 = max_total_score_proto( x-1, y, field );
    if( candid1 > candid2 ) return candid1 + field[x][y];
    return candid2 + field[x][y];
}

int max_total_score( int x, int y, vector<int> &get, vector<vector<int>> &field ){
    int ans;
    if( x == 0 and y == 0 ){
        ans = field[0][0];
        get.resize(0);
    }
    else if( x == 0 ){
        ans =  max_total_score( 0, y-1, get, field ) + field[0][y];
        get.resize(0);
    }else if( y == 0 ){
        ans = max_total_score( x-1, 0, get, field ) + field[x][0];
        if( field[x][0] > 0 ) get.push_back(field[x][0]);
    }else{
        int candid1 = max_total_score( x, y-1, get, field );
        int candid2 = max_total_score( x-1, y, get, field );
        if( candid1 > candid2 ){ 
            //y+1
            get.resize(0);
            ans = candid1 + field[x][y];
        }
        else{
            //x+1
            if( field[x][y] > 0 ) get.push_back(field[x][y]);
            ans = candid2 + field[x][y];
        }
    }
    if( get.size() > 3 ){
        vector<int>::iterator abandant = min_element( get.begin(), get.end() );
        ans -= *abandant;
        get.erase(abandant);
    }
    cout << ans << endl;
    return ans;
}


int main (){
    int R,C,K;
    cin >> R >> C >> K;
    vector<int> x(K),y(K),v(K);
    rep(i,K) cin >> x[i] >> y[i] >> v[i];
    vector<vector<int>> field( R, vector<int>(C,0) );
    rep(i,K) field[ x[i]-1 ][ y[i]-1 ] = v[i];
    vector<int> get(0);
    cout << max_total_score( R-1, C-1, get, field ) << endl;
    return 0;
}

