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

class Prime {
// n以下の素数を列挙する
public:
  const int n;
  vector<bool> is_prime;
  vector<ll> primes;
  Prime(ll size) : n(size), is_prime(n+1, true) {
    is_prime[0] = false;
    is_prime[1] = false;
    for (ll i = 2; i <= n; ++i) {
      if (!is_prime[i]) continue;
      primes.push_back(i);
      ll tmp = 2*i;
      while (tmp <= n) {
        is_prime[tmp] = false;
        tmp += i;
      }
    }
  }

  bool check(int x) { return is_prime[x]; }
};

int main(){
  ll n; cin >> n;

  ll ans = 0;
  
  Prime prime(1000000);

  int i = 1;
  while(true){
    ll divided = n/(prime.primes[i]*prime.primes[i]*prime.primes[i]);

    if(divided >= prime.primes[i-1]){
      ans += i;
      i++;
    }
    else{
      for(auto p : prime.primes){
        if(divided >= p){
          ans++;
        }
        else{
          i++;
          break;
        }
      }
      if(2*prime.primes[i]*prime.primes[i]*prime.primes[i] > n) break;
    }
  } 

  cout << ans << endl;
}