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

int R,C;
int sy,sx;
int gy,gx;
vector<vector<char>> c(50, vector<char>(50));
vector<vector<int>> move_num(50, vector<int>(50,-1));
int ans;

vector<int> num_y = {1,-1,0,0};
vector<int> num_x = {0,0,1,-1};

int main() {
    cin >> R >> C;
    cin >> sy >> sx;
    cin >> gy >> gx;
    sy--; sx--; gy--; gx--;
    rep(i,R) rep(j,C) cin >> c[i][j];

    queue<vector<int>> q;
    q.push({sy,sx});
    move_num[sy][sx] = 0;
    while(true){
        vector<int> now = q.front();
        q.pop();

        if(now[0] == gy && now[1] == gx) break;

        rep(i,4){
            int next_y = now[0] + num_y[i];
            int next_x = now[1] + num_x[i];
            
            if(next_y >= 0 && next_y < R && next_x >= 0 && next_x < C){
                if(c[next_y][next_x] == '.' && move_num[next_y][next_x] == -1){
                    q.push({next_y, next_x});
                    move_num[next_y][next_x] = move_num[now[0]][now[1]] + 1;
                }
            }
        }
    }

    cout << move_num[gy][gx] << endl;
}