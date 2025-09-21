#include <iostream>
#include <vector>


using namespace std;

bool isValidMove(int N, int M, int H, int W, int r, int c, const vector<vector<int>>& grid) {
    if (r < 0 || c < 0 || r + H > N || c + W > M) {
        return false;
    }
    for (int i = r; i < r + H; ++i) {
        for (int j = c; j < c + W; ++j) {
            if (grid[i][j] == 1) {
                return false;
            }
        }
    }
    return true;
}


#include <queue>

int bfsShortest(int N, int M, int H, int W, int sr, int sc, int fr, int fc, const vector<vector<int>>& grid) {
    // sr, sc, fr, fc are 0-based coordinates for the top-left corner of the HxW rectangle.
    if (!isValidMove(N, M, H, W, sr, sc, grid) || !isValidMove(N, M, H, W, fr, fc, grid)) return -1;
    vector<vector<int>> dist(N, vector<int>(M, -1));
    queue<pair<int,int>> q;
    dist[sr][sc] = 0;
    q.push({sr, sc});
    const int dr[4] = {-1, 1, 0, 0};
    const int dc[4] = {0, 0, -1, 1};

    while (!q.empty()) {
        auto [r, c] = q.front(); q.pop();
        if (r == fr && c == fc) return dist[r][c];
        for (int k = 0; k < 4; ++k) {
            int nr = r + dr[k], nc = c + dc[k];
            if (nr < 0 || nc < 0 || nr >= N || nc >= M) continue;
            if (dist[nr][nc] != -1) continue;
            if (!isValidMove(N, M, H, W, nr, nc, grid)) continue;
            dist[nr][nc] = dist[r][c] + 1;
            q.push({nr, nc});
        }
    }
    return -1;
}

/* Example usage to place in main after reading inputs:
   // convert 1-based to 0-based if inputs are 1-based:
   --S_r; --S_c; --F_r; --F_c;
   int ans = bfsShortest(N, M, H, W, S_r, S_c, F_r, F_c, grid);
   cout << ans << '\n';
*/





int main() {
    int N;
    int M;
    cin >> N >> M;

    vector<vector<int>> grid(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> grid[i][j];
        }
    }
    int H, W, S_r, S_c, F_r, F_c;
    cin >> H >> W >> S_r >> S_c >> F_r >> F_c;

    return 0;
}
