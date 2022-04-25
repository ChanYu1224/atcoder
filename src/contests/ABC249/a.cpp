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
    int a,b,c,d,e,f,x; cin >> a >> b >> c >> d >> e >> f >> x;

    int takahashi_distance = x/(a+c)*(a*b);
    if(x%(a+c) > a){
        takahashi_distance += a*b;
    }else{
        takahashi_distance += x%(a+c)*b;
    }

    int aoki_distance = x/(d+f)*(d*e);
    if(x%(d+f) > d){
        aoki_distance += d*e;
    }else{
        aoki_distance += x%(d+f)*e;
    }

    if(takahashi_distance == aoki_distance){
        cout << "Draw" << endl;
    }else if(takahashi_distance > aoki_distance){
        cout << "Takahashi" << endl;
    }else{
        cout << "Aoki" << endl;
    }
}