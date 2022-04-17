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

ll a[200010];

int main(){
	ll n,k,x; cin >> n >> k >> x;
    rep(i,n) cin >> a[i];

    ll ans = 0;
    rep(i,n){
        int cnt = a[i]/x;
        if(k-cnt >= 0){
            a[i] %= x;
            k -= cnt;
        }else{
            a[i] -= k*x;
            k = 0;
            break;
        }
    }
    sort(a,a+n);
    reverse(a,a+n);
    
    rep(i,k,n){
        ans += a[i];
    }

    cout << ans << endl;

}