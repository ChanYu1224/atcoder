#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define repr(i, n) for(int i = (int)(n); i >= 0; i--)
#define repm(i, m, n) for(int i = (int)(m); i < (int)(n); i++)
#define repmr(i, m, n) for(int i = (int)(n); i >= (int)(m); i--)
#define all(x) (x).begin(),(x).end()
#define inf 2e9

using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
    int h,w;
    cin >> h >> w;
    vector<vector<char>> c(h, vector<char>(w));
    vector<int> start(2);
    rep(i,h) rep(j,w){
        cin >> c[i][j];
        if(c[i][j] == 's'){
            start[0] = i;
            start[1] = j;
        }
    }

    vector<vector<bool>> rout(h, vector<bool>(w, false));
    stack<vector<int>> st;
    st.push(start);
    bool goal = false;
    while(st.size() != 0){
        vector<int> now = st.top();
        if(c[now[0]][now[1]] == 'g'){
            goal = true;
            break;   
        }
        st.pop();
        rout[now[0]][now[1]] = true;
        if(now[0]-1 >= 0 && c[now[0]-1][now[1]] != '#' && !rout[now[0]-1][now[1]]){
            st.push({now[0]-1, now[1]});
        }
        if(now[0]+1 < h && c[now[0]+1][now[1]] != '#' && !rout[now[0]+1][now[1]]){
            st.push({now[0]+1, now[1]});
        }
        if(now[1]-1 >= 0 && c[now[0]][now[1]-1] != '#' && !rout[now[0]][now[1]-1]){
            st.push({now[0], now[1]-1});
        }
        if(now[1]+1 < w && c[now[0]][now[1]+1] != '#' && !rout[now[0]][now[1]+1]){
            st.push({now[0], now[1]+1});
        }
    }

    cout << ((goal) ? "Yes":"No") << endl;

}