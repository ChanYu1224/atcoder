#include <bits/stdc++.h>
#include <atcoder/scc>
using namespace std;
using namespace atcoder;

#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)

#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
#define YesNo(a) (a)?cout<<"Yes"<<endl:cout<<"No"<<endl
#define YESNO(a) (a)?cout<<"YES"<<endl:cout<<"NO"<<endl
#define INF (2e9)
#define longINF (2e18)
#define PI (acos(-1))
#define all(x) (x).begin(),(x).end()
#define MOD 1000000007

typedef long long ll;

int main(){
    int n,m; cin >> n >> m;

    scc_graph graph(n);
    vector<vector<int>> graph_list(n);

    rep(i,m){
        int u, v; cin >> u >> v;
        u--;
        v--;
        graph.add_edge(u,v);
        graph_list[u].push_back(v);
    }

    vector<vector<int>> scc = graph.scc(); //強連結成分を二次元ベクトルに変換
    int k = scc.size(); //強連結成分の集合数
    vector<int> index(n); //頂点がどの集合に属しているのかを格納

    

    rep(i,k){
        for(auto v : scc[i]){
            index[v] = i;
        }
    }

    vector<int> dp(k);
    int ans = 0;
    for(int i = k-1; i >= 0; --i){
        if(scc[i].size()==1){
            for(auto v : graph_list[scc[i][0]]){ //scc[i][0]はi番目の集合の1つめ
                if(dp[index[v]]) dp[i] = 1;
            }
        }else{
            dp[i] = 1;
        }
        if(dp[i]) ans += scc[i].size();
    }

    cout << ans << endl;
}