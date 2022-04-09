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
  std::vector<int> array = {3, 2, 5, 7, 1};

    // 配列のインデックス indiecs = {0, 1, 2, 3, 4} を作成する。
    std::vector<size_t> indices(array.size());
    std::iota(indices.begin(), indices.end(), 0);

    // ソートする。
    std::sort(indices.begin(), indices.end(), [&array](size_t i1, size_t i2) {
        return array[i1] < array[i2];
    });

    for (auto v : indices)
        std::cout << v << " ";
        
    std::cout << std::endl;
}