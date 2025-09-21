#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <stack>
#include <functional>
using namespace std;
const int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};


int N, M, Q;
vector<string> grid;
vector<vector<int>> island_id;


void label_islands() {
    island_id.assign(N, vector<int>(M, -1));
    int id = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (grid[i][j] == 'O' && island_id[i][j] == -1) {
                stack<pair<int,int>> st;
                st.push({i, j});
                island_id[i][j] = id;
                while (!st.empty()) {
                    auto [x, y] = st.top(); st.pop();
                    for (int d = 0; d < 8; ++d) {
                        int nx = x + dx[d], ny = y + dy[d];
                        if (nx >= 0 && nx < N && ny >= 0 && ny < M &&
                            grid[nx][ny] == 'O' && island_id[nx][ny] == -1) {
                            island_id[nx][ny] = id;
                            st.push({nx, ny});
                        }
                    }
                }
                ++id;
            }
        }
    }
}

int min_crossings(int sx, int sy, int ex, int ey) {
    vector<vector<int>> dist(N, vector<int>(M, 1e9));
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;
    dist[sx][sy] = 0;
    pq.push({0, sx, sy});
    while (!pq.empty()) {
        auto [cost, x, y] = pq.top(); pq.pop();
        if (x == ex && y == ey) return cost;
        if (cost > dist[x][y]) continue;
        for (int d = 0; d < 8; ++d) {
            int nx = x + dx[d], ny = y + dy[d];
            if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
                int ncost = cost;
                if (grid[x][y] == '~' && grid[nx][ny] == 'O') {
                    ncost++;
                }
                if (dist[nx][ny] > ncost) {
                    dist[nx][ny] = ncost;
                    pq.push({ncost, nx, ny});
                }
            }
        }
    }
    return -1;
}

int main() {
    if (!(cin >> N >> M >> Q)) return 0;

    grid.resize(N);
    string row;
    for (int i = 0; i < N; ++i) {
        cin >> row;
        grid[i] = row;
    }

    label_islands();

    for (int q = 0; q < Q; ++q) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int res = min_crossings(x1 - 1, y1 - 1, x2 - 1, y2 - 1);
        cout << res << '\n';
    }
    return 0;
}
