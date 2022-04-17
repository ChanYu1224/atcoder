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
#define PI (acos(-1))
#define all(x) (x).begin(),(x).end()
#define MOD 1000000007

typedef long long ll;

ll x[300], y[300];
bool flag[300][300];

bool colinear(int a, int b, int c){
    ll diff_1 = (x[a] - x[b])*(y[a] - y[c]);
    ll diff_2 = (x[a] - x[c])*(y[a] - y[b]);
    return (diff_1 == diff_2);
}

int main(){
    ll n, k; cin >> n >> k;
    rep(i,n) cin >> x[i] >> y[i];

    if(k == 1){
        cout << "Infinity" << endl;
        return 0;
    }

    ll ans = 0;
    rep(i,n)rep(j,n) flag[i][j] = true;
    
    rep(p1,n)rep(p2,p1+1,n){
        if(flag[p1][p2]){
            int cnt = 2;
            vector<int> list;
            list.push_back(p1);
            list.push_back(p2);
            rep(p3,p2+1,n){
                if(colinear(p1, p2, p3)){
                    cnt++;
                    list.push_back(p3);
                }
            }
            rep(i,cnt) rep(j,i+1,cnt){
                flag[list[i]][list[j]] = false;
            }
            if(cnt >= k) ans++;
        }
    }

    cout << ans << endl;
}