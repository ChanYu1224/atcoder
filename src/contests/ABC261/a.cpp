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
    int l1, r1, l2, r2; cin >> l1 >> r1 >> l2 >> r2;
    
    vector<bool> is_red(101, false), is_blue(101, false);

    rep(i,l1,r1) is_red[i] = true;
    rep(i,l2,r2) is_blue[i] = true;

    int ans = 0;

    rep(i,101){
        if(is_red[i] && is_blue[i]) ans++;
    }

    cout << ans << endl;
}