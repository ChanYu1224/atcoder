#include <bits/stdc++.h>
using namespace std;

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

bool graph[101][101];

int main(){
    int n,m; cin >> n >> m;
    rep(i,m){
        int u, v; cin >> u >> v;
        u--;
        v--;
        graph[u][v] = true;
        graph[v][u] = true;
    }

    int ans = 0;

    rep(i,100){
        rep(j,i+1,100){
            rep(k,j+1,100){
                if(graph[i][j] && graph[j][k] && graph[k][i]) ans++;
            }
        }
    }

    cout << ans << endl;
}