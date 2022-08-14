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

int h1, w1, h2, w2;
vector<vector<int>> a(10, vector<int>(10)), b(10, vector<int>(10));

bool ignore_h[10], ignore_w[10];

int main(){
    cin >> h1 >> w1;
    rep(i, h1) rep(j, w1) cin >> a[i][j];

    cin >> h2 >> w2;
    rep(i, h2) rep(j, w2) cin >> b[i][j];

    int h2_now = 0;
    int w2_now = 0;

    
    // 横一致を舐める
    rep(ib, h2){
        rep(jb, w2){
            rep(ia, h1){
                if(ignore_h) continue;
                rep(ja, w1){
                    if(ignore_w) continue;

                    if(a[ia][ja] == b[ib][jb]){
                        if(jb-1 >= 0){
                            bool exist = false;
                            rep(k, jb-1){
                                if(b[ib][jb-1] == a[ia][k]){
                                    exist = true;
                                }
                            }
                            if(!exist){
                                ignore_w[w1] = true;
                                continue;
                            }
                        }
                        if(jb+1 < w2){
                            bool exist = false;
                            rep(k, jb+1, w2){
                                if(b[ib][jb+1] == a[ia][k]){
                                    exist = true;
                                }
                            }
                            if(!exist){
                                ignore_w[w1] = true;
                                continue;
                            }
                        }
                        if(ib-1 >= 0){
                            bool exist = false;
                            rep(k, ib-1){
                                if(b[ib-1][])
                            }
                        }
                    }
                }
            }
        }
    }


}