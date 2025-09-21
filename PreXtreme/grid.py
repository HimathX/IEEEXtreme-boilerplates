from collections import deque

N, M = map(int, input().split())
grid = [list(map(int, input().split())) for _ in range(N)]
H, W, Sr, Sc, Fr, Fc = map(int, input().split())

Sr, Sc, Fr, Fc = Sr - 1, Sc - 1, Fr - 1, Fc - 1

psum = [[0] * (M + 1) for k in range(N + 1)]
for i in range(N):
    for j in range(M):
        psum[i + 1][j + 1] = psum[i][j + 1] + psum[i + 1][j] - psum[i][j] + grid[i][j]

def is_valid_move(grid, N, M, H, W, r, c):
    # bounds check
    if r < 0 or c < 0 or r + H > N or c + W > M:
        return False
    rect_sum = psum[r + H][c + W] - psum[r][c + W] - psum[r + H][c] + psum[r][c]
    return rect_sum == 0
    
def bfs(grid, N, M, H, W, Sr, Sc, Fr, Fc):
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    visited = [[False] * M for _ in range(N)]
    queue = deque([(Sr, Sc, 0)])  
    visited[Sr][Sc] = True

    while queue:
        r, c, dist = queue.popleft()
        if (r, c) == (Fr, Fc):
            return dist
        for dr, dc in directions:
            nr, nc = r + dr, c + dc
            if 0 <= nr < N and 0 <= nc < M and not visited[nr][nc]:
                if is_valid_move(grid, N, M, H, W, nr, nc):
                    visited[nr][nc] = True
                    queue.append((nr, nc, dist + 1))
    return -1
result = bfs(grid, N, M, H, W, Sr, Sc, Fr, Fc)
print(result)
