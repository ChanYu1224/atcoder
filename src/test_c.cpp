#include <bits/stdc++.h>

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

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    vector<long double> X(n);
    vector<long double> Y(n);
    rep(i, n) cin >> X[i] >> Y[i];

    int ans = 0;
    rep(i,n) rep(j,i+1,n) rep(k,j+1,n){
        long double change_1 = abs(Y[i]-Y[j])/abs(X[i]-X[j]);
        long double change_2 = abs(Y[j]-Y[k])/abs(X[j]-X[k]);
        long double change_3 = abs(Y[i]-Y[k])/abs(X[i]-X[k]);
        if(change_1 != change_2 || change_2 != change_3) ans++;
    }

    cout << ans << endl;
}