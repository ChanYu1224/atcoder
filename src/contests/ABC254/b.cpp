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

int main(){
    int n; cin >> n;

    vector<vector<int>> a(n);
    rep(i,n){
        rep(j,i+1){
            if(j == 0 || j == i){
                a[i].push_back(1);
            }else{
                a[i].push_back(a[i-1][j-1]+a[i-1][j]);
            }
        }

        rep(j,a[i].size()){
            if(j != a[i].size()-1){
                cout << a[i][j] << " ";
            }else{
                cout << a[i][j] << endl;
            }
        }
    }
}