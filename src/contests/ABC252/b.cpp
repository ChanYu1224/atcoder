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
#define MOD 1000000007

typedef long long ll;

int n,k;
int a[101], b[101];
bool is_hate[101];

int main(){
    cin >> n >> k;
    rep(i,n) cin >> a[i];
    rep(i,k) cin >> b[i];

    rep(i,k){
        is_hate[b[i]-1] = true;
    }

    int max_delicious = -1;
    int ans = false;
    rep(i,n){
        if(max_delicious < a[i]){
            max_delicious = a[i];
            ans = is_hate[i];
        }else if(max_delicious == a[i]){
            ans = ans || is_hate[i];
        }
    }

    YesNo(ans);
}