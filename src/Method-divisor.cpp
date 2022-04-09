#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define repr(i, n) for(int i = (int)(n); i >= 0; i--)
#define repm(i, m, n) for(int i = (int)(m); i < (int)(n); i++)
#define repmr(i, m, n) for(int i = (int)(n); i >= (int)(m); i--)
#define all(x) (x).begin(),(x).end()
#define inf 2e9
#define MOD 1000000007

using namespace std;
typedef long long ll;

vector<ll> divisor(ll n) {
  vector<ll> ret;
  for(ll i = 1; i * i <= n; i++) {
    if(n % i == 0) {
      ret.push_back(i);
      if(i * i != n) ret.push_back(n / i);
    }
  }
  sort(all(ret));
  return (ret);
}