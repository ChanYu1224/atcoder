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

ll divisor(ll n, ll max) {
    ll result = 0;
    ll sqrt_num = sqrt(n);
    for(ll i = sqrt_num; i >= 1; i--) {
        if(n % i == 0) {
            if(n/i > max) break;
            if(i*i == n) result += 1;
            else result += 2;
        }
    }
    return result;
}

int main(){
    ll n; cin >> n;

    vector<ll> square;

    rep(i,1,n+1){
        square.push_back(i*i);
    }

    ll ans = 0;
    int m = square.size();
    rep(i,m){
        ans += divisor(square[i], n);
    }

    cout << ans << endl;
}