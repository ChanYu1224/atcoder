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

int main(){
	int x[3], y[3];
	rep(i,3) cin >> x[i] >> y[i];

	int ans_x, ans_y;

	if(x[0] == x[1]) ans_x = x[2];
	if(x[1] == x[2]) ans_x = x[0];
	if(x[0] == x[2]) ans_x = x[1];

	if(y[0] == y[1]) ans_y = y[2];
	if(y[1] == y[2]) ans_y = y[0];
	if(y[0] == y[2]) ans_y = y[1];

	cout << ans_x << " " << ans_y << endl;
}