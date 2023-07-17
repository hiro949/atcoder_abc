#include<bits/stdc++.h>
#define rep(i,n) for ( int i=0; i< (n); ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    int n,x;
    cin >> n >> x;
    queue<int> q;
    rep(i,n){
        int ai;
        cin >> ai;
        if(ai!=x) q.push(ai);
    }
    while(!q.empty()){
        int aj = q.front();q.pop();
        cout << aj << " ";
    }
    cout << endl;
    return 0;
}
