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

void showTable( vector<vector<int>> table ){
  int n = table.size();
  int m = table.front().size();
  rep(i,n){
    rep(j,m){
      cout << setw(10) << left << table[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}
