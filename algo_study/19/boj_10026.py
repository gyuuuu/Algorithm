import sys
sys.setrecursionlimit(10000)

direction = [(-1, 0), (0, 1), (1, 0), (0, -1)]

normal = []
abnormal = []
n = int(sys.stdin.readline().rstrip())
for _ in range(n):
  inputs = list(sys.stdin.readline().rstrip())
  normal.append(inputs)
  abnormal.append([m if m != 'G' else 'R' for m in inputs])

def dfs(arr, x, y, color, visit):
  for d in direction:
    nx = x + d[0]
    ny = y + d[1]
    if nx >= 0 and ny >= 0 and nx < n and ny < n and arr[nx][ny] == color and visit[nx][ny] == 0:
      visit[nx][ny] = 1
      dfs(arr, nx, ny, color, visit)

normal_visit = [[0] * n for _ in range(n)]
abnormal_visit = [[0] * n for _ in range(n)]
normal_cnt, abnormal_cnt = 0, 0
for i in range(n):
  for j in range(n):
    if normal_visit[i][j] == 0:
      normal_visit[i][j] = 1
      normal_cnt += 1
      dfs(normal, i, j, normal[i][j], normal_visit)
    if abnormal_visit[i][j] == 0:
      abnormal_visit[i][j] = 1
      abnormal_cnt += 1
      dfs(abnormal, i, j, abnormal[i][j], abnormal_visit)

print(normal_cnt, abnormal_cnt)