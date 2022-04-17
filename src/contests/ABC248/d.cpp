#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(ll i=0;i<n;i++)
#define repm(i,m,n) for(ll i=m;i<n;i++)
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
    int n; cin >> n;
    vector<int> a(n); rep(i,n) cin >> a[i];
    int q; cin >> q;

    vector<vector<int>> index(n+1, vector<int>());

    rep(i,n){
        index[a[i]].push_back(i);
    }

    rep(i,q){
        int l, r, x; cin >> l >> r >> x;
        auto left = lower_bound(all(index[x]), l-1);
        auto right = lower_bound(all(index[x]), r);

        cout << right - left << endl;
    }
}