#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

//mod 8
//1 = 1
//10 = 2
//100 = 4
//1000 = 0
//10000 = 0
//100000 = 0
//...
// choose 3 numbers a,b,c s.t. a + 2b + 4c = 0 mod 8

//0 {}
//1 {a}
//2 {b}
//3 {c}
//4 {a,b}
//5 {b,c}
//6 {c,a}
//7 {a,b,c}

int main(){
    string s;
    cin >> s;
    int n = s.length();
    vector<int> dig(n);
    rep(i,n) dig[i] == (s[i] - '0')%8;
    vector<vector<vector<bool>>> dp(n+1, vector<vector<bool>>(10, vector<bool>(8,false))); // did not use? a or b or c & rem?
    
    for( int i=1; i<=n; ++i ){
        // 1 chose
        rep(j,10){
            rep(r,8){
                dp[i][j][r] = dp[i-1][j][r]; 
            }
        }
        dp[i][1][dig[i-1]%8] = true; //a
        dp[i][2][(2*dig[i-1])%8] = true; //b
        dp[i][3][(4*dig[i-1])%8] = true; //c
        rep(r,8){
            // 2 chose
            dp[i][4][(r+2*dig[i-1])%8] = dp[i-1][1][r]; // a=>b
            dp[i][5][(r+dig[i-1])%8] = dp[i-1][2][r]; // b=>a
            dp[i][6][(r+4*dig[i-1])%8] = dp[i-1][2][r]; // b=>c
            dp[i][7][(r+2*dig[i-1])%8] = dp[i-1][3][r]; // c=>b
            dp[i][8][(r+dig[i-1])%8] = dp[i-1][3][r]; // c=>a
            dp[i][9][(r+4*dig[i-1])%8] = dp[i-1][1][r]; // a=>c
            /*
            // 3 chose
            dp[i][10][(r+dig[i-1])%8] = (dp[i][6][r] or dp[i][7][r]);
            dp[i][10][(r+2*dig[i-1])%8] = (dp[i][8][r] or dp[i][9][r]);
            dp[i][10][(r+4*dig[i-1])%8] = (dp[i][4][r] or dp[i][5][r]);
            */
        }
    }
    if(dp[n][10][0]) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}



