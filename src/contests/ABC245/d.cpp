#include <bits/stdc++.h>
using namespace std;

#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#define repr(i,n) for(int i=int(n)-1;i>=0;--i)

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

int a[101], b[101], c[202];

int main(){
  int n,m; cin >> n >> m;
  
  int a_dim = n;
  int b_dim = m;
  int c_dim = n+m;
  
  rep(i,a_dim+1) cin >> a[i];
  rep(i,c_dim+1) cin >> c[i];

  rep(i,b_dim+1){
    b[b_dim-i] = c[c_dim-i] / a[a_dim];
    rep(j,a_dim+1){
      c[c_dim-i-j] -= a[a_dim-j]*b[b_dim-i];
    }
  }

  rep(i,b_dim){
    cout << b[i] << " ";
  }
  cout << b[b_dim] << endl;
}