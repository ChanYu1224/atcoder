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


void sort2vectors(vector<int> &av, vector<int> &bv)
{
        int n = av.size();
        vector<int> p(n), av2(n), bv2(n);
        iota(p.begin(), p.end(), 0);
        sort(p.begin(), p.end(), [&](int a, int b) { return av[a] < av[b]; });
        for (int i = 0; i < n; i++) {
                av2[i] = av[p[i]];
                bv2[i] = bv[p[i]];
        }
        av = av2;
        bv = bv2;
}


int main(){
    int N; cin >> N;
    vector<int> A(N), C(N);
    vector<int> indices(N); rep(i, N) indices[i] = i;
    rep(i, N) cin >> A[i] >> C[i];

    sort2vectors(A, indices);
    vector<int> C_tmp(N);
    copy(C.begin(), C.end(), C_tmp.begin());
    rep(i, N) {
        C[i] = C_tmp[indices[i]];
    }

    reverse(all(C));
    reverse(all(indices));

    // rep(i, N) {
    //     cout << C[i] << " " << indices[i] << endl;
    // }

    vector<int> result_cards;
    int min_cost = INF;
    int m = 0;

    rep(i, N) {
        min_cost = min(min_cost, C[i]);
        if(min_cost >= C[i]) {
            result_cards.push_back(indices[i]+1);
            m++;
        }
    }
    sort(all(result_cards));

    // output results
    cout << m << endl;

    rep(i, m) { 
        if(i == m-1) {
            cout << result_cards[i] << endl;
        } else {
            cout << result_cards[i] << " ";
        }
    }
}