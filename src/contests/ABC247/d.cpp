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
  int q; cin >> q;
  deque<pair<ll, ll>> pipe;
  rep(i,q){
    int query_num; cin >> query_num;
    if(query_num == 1){
      int x, c; cin >> x >> c;
      pipe.push_back(pair<ll,ll>(x,c));
    }
    else{
      ll c; cin >> c;
      ll ans = 0;
      pair<ll,ll> p = pipe.front();

      while(true){
        if(p.second >= c){
          p.second -= c;
          ans += p.first * c;
          if(p.second == 0){
            pipe.pop_front();
            p = pipe.front();
          }
          else{
            pipe.front() = pair<ll,ll>(p.first, p.second);
          }
          cout << ans << endl;
          break;
        }
        else{
          c -= p.second;
          ans += p.first * p.second;
          pipe.pop_front();
          p = pipe.front();
        }
      } 
    }
  }
}