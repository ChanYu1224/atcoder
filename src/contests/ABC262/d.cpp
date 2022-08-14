#include <bits/stdc++.h>
#include <atcoder/all>
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
#define MOD 998244353

typedef long long ll;

int main(){
    int n; cin >> n;
    vector<int> a(n); rep(i,n) cin >> a[i];

    modint998244353 ans = 0;
    rep(i,1,n+1){
        modint998244353 dp[n+1][i+1][i];
        dp[0][0][0] = 1;
        rep(j,n) rep(k,i+1) rep(l,i){
            dp[j+1][k][l] += dp[j][k][l];
            if(k != i) dp[j+1][k+1][(l+a[j])%i] += dp[j][k][l];
        }
        ans += dp[n][i][0];
    }

    cout << ans.val() << endl;
}