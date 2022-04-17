#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(ll i=0;i<n;i++)
#define repm(i,m,n) for(ll i=m;i<n;i++)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
#define YesNo(a) (a)?cout<<"Yes"<<endl:cout<<"No"<<endl
#define YESNO(a) (a)?cout<<"YES"<<endl:cout<<"NO"<<endl
#define INF (2e9)
#define PI (acos(-1))
#define all(x) (x).begin(),(x).end()
#define MOD 1000000007

typedef long long ll;

int dp[50][2500];

int main(){
    int n, m, k; cin >> n >> m >> k;
    int mod = 998244353;

    rep(i,n-1){
        rep(j,k){
            if(i == 0){
                if(j < m) dp[i][j] = 1;
                else dp[i][j] = 0;
            }
            rep(offset, m){
                dp[i+1][j+offset] = (dp[i][j] + dp[i+1][j+offset])%mod;
            }
        }
    }

    int ans = 0;
    rep(i,k-n+1){
        ans = (ans + dp[n-1][i])%mod;
    }

    cout << ans << endl;
}