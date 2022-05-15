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

string s[100001];
ll t[100001];
bool is_original[100001];

int main(){
    int n; cin >> n;
    rep(i,n) cin >> s[i] >> t[i];
    map<string, int> exist;

    rep(i,n){
        if(exist[s[i]]) continue;
        else{
            is_original[i] = true;
            exist[s[i]]++;
        }
    }

    int max_idx = -1;
    int max = -1;
    rep(i,n){
        if(is_original[i] && max < t[i]){
            max = t[i];
            max_idx = i;
        }
    }

    cout << max_idx+1 << endl;
}