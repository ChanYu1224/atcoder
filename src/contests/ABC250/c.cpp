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

int a[200001], idx[200001], x[200001];

int main(){
  int N,Q; cin >> N >> Q;
  rep(i,N){
    a[i] = i+1;
    idx[i+1] = i;
  }
  rep(i,Q){
    cin >> x[i];
    x[i];
  }

  rep(i,Q){
    int tmp_index = idx[x[i]];
    int tmp = a[tmp_index];
    if(tmp_index == N-1){
      idx[a[tmp_index-1]] = tmp_index;
      a[tmp_index] = a[tmp_index-1];
      idx[tmp] = tmp_index-1;
      a[tmp_index-1] = tmp;

    }
    else{
      idx[a[tmp_index+1]] = tmp_index;
      a[tmp_index] = a[tmp_index+1];
      idx[tmp] = tmp_index+1;
      a[tmp_index+1] = tmp;
    }
  }

  rep(i,N-1){
    cout << a[i] << " ";
  }
  cout << a[N-1] << endl;
}