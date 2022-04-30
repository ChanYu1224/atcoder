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

int a[200001], b[200001];
bool dp[2][200001];

int main(){
  int n,k; cin >> n >> k;
  rep(i,n) cin >> a[i];
  rep(i,n) cin >> b[i];

  dp[0][0] = true;
  dp[1][0] = true;
  rep(i,1,n){
    if(dp[0][i-1]){
      if(abs(a[i-1]-a[i]) <= k) dp[0][i] = true;
      if(abs(a[i-1]-b[i]) <= k) dp[1][i] = true;
    }
    if(dp[1][i-1]){
      if(abs(b[i-1]-a[i]) <= k) dp[0][i] = true;
      if(abs(b[i-1]-b[i]) <= k) dp[1][i] = true;
    }
  }

  YesNo(dp[0][n-1] || dp[1][n-1]);
}