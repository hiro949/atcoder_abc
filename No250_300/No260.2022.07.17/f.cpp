#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, m, n) for (int i = m; i < (n); ++i)
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;
using PP = pair<int, vector<int>>;
using mint = modint1000000007;
const int inf = numeric_limits<int>::max() / 2;

// V1,V2の２部グラフ

int main(){
    int s, t, m;
    cin >> s >> t >> m;
    vector<vector<int>> G(s + t, vector<int>());
    int ui, vi;
    rep(i, m)
    {
        cin >> ui >> vi;
        --ui, --vi;
        G[ui].push_back(vi);
        G[vi].push_back(ui);
    }

    auto make_pp = []( int vn, int vs, int l ){ return make_pair(vn,make_pair(vs,l)); };

    rep2(vs,s,s+t){
        //now, length
        queue<PP> q;
        q.emplace(vs,vector<int>{vs});
        while(q.size()>0){
            PP p = q.front(); q.pop();
            int vn = p.first;
            vector<int> root = p.second;
            int l=root.size();
            for( int u : G[vn] ){
                if(l==2 and u==vs) continue;
                if(l==4){
                    if(u==vs){
                        for( int vr : root){
                            cout << vr << " ";
                        }
                        cout << endl;
                    }else{
                        continue;
                    }
                }
                root.push_back(u);
                q.emplace(u,root);
            }
            cout << -1 << endl;
            return 0;
        }
    }
    return 0;
}