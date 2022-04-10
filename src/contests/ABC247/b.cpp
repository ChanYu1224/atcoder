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
  int n;
  cin >> n;
  vector<string> s(n), t(n);
  rep(i,n){
    cin >> s[i] >> t[i];
  }

  map<string, int> match;
  bool ans = true;
  rep(i,n){
    if(s[i] == t[i]){
      match[s[i]]++;
    }
    else{
      match[s[i]]++;
      match[t[i]]++;
    }
  }
  rep(i,n){
    if(match[s[i]] > 1 && match[t[i]] > 1){
      ans = false;
      break;
    }
  }

  YesNo(ans);
}