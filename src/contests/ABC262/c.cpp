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

int main(){
    int n; cin >> n;
    vector<ll> a(n); rep(i,n) cin >> a[i];

    rep(i,n){
        a[i]--;
    }

    ll cnt = 0;
    ll ans = 0;
    rep(i,n){
        if(a[i] == i) cnt++;
        if(a[a[i]] == i && i < a[i]) ans++;
    }

    cnt = max(0,cnt-1);
    ans += (cnt+1)*cnt / 2;

    cout << ans << endl;
}