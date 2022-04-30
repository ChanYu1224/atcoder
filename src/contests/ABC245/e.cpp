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

int n,m;
int a[200001], b[200001], c[200001], d[200001];

int main(){
  cin >> n >> m;
  rep(i,n) cin >> a[i];
  rep(i,n) cin >> b[i];
  rep(i,m) cin >> c[i];
  rep(i,m) cin >> d[i];

  vector<pair<int,int>> choco, box;

  rep(i,n) choco.push_back({a[i], b[i]});
  rep(i,m) box.push_back({c[i], d[i]});

  sort(all(choco));
  sort(all(box));

  multiset<ll> candidate;

  while(choco.size()){
    auto &ab = choco.back();
    choco.pop_back();
    while(box.size()){
      auto &cd = box.back();
      if(cd.first >= ab.first){
        candidate.emplace(cd.second);
        box.pop_back();
      }else{
        break;
      }
    }
    auto iter = candidate.lower_bound(ab.second);
    if(iter == candidate.end()){
      cout << "No" << endl;
      return 0;
    }
    candidate.erase(iter);
  }

  cout << "Yes" << endl;
}