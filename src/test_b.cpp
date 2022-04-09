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
    int h,w; cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    rep(i,h) rep(j,w) cin >> a[i][j];

    bool ans = true;
    rep(i_1,h-1) rep(i_2,i_1+1,h) rep(j_1,w-1) rep(j_2,j_1+1,w){
        if(a[i_1][j_1]+a[i_2][j_2] > a[i_2][j_1]+a[i_1][j_2]){
            ans = false;
            break;
        }
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;

}