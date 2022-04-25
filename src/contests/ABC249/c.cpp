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
    int n,k; cin >> n >> k;
    vector<string> s(n);
    rep(i,n) cin >> s[i];

    vector<vector<bool>> d(n, vector<bool>(27));
    rep(i,n){
        rep(j,s[i].size()){
            int itr = s[i][j] - 'a';
            d[i][itr] = true;
        }
    }

    int ans_max = 0;

    for(int bit = 0; bit < (1<<n); bit++){
        vector<int> cnt(27);
        rep(i,n){
            if(bit&(1<<i)){
                rep(j,27){
                    if(d[i][j]) cnt[j]++;
                }
            }
        }
        int ans_tmp = 0;
        rep(j,27){
            if(cnt[j] == k) ans_tmp++;
        }
        ans_max = max(ans_max, ans_tmp);
    }

    cout << ans_max << endl;
}