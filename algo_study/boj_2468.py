import sys

sys.setrecursionlimit(100000)
n = int(sys.stdin.readline().rstrip())

direction = [(-1, 0), (0, 1), (1, 0), (0,-1)]
def dfs(arr, x, y, cnt):
  arr[x][y] = cnt
  for dx, dy in direction:
    new_x = x + dx
    new_y = y + dy
    if new_x >= 0 and new_x < n and new_y >= 0 and new_y < n and arr[new_x][new_y] == 0:
      dfs(arr, new_x, new_y, cnt)

matrix = []
top = 0
for i in range(n):
  arr = list(map(int, sys.stdin.readline().rstrip().split()))
  top = max(top, max(arr))
  matrix.append(arr)

answer = 1
for h in range(1, top):
  after_rain = []
  for row in matrix:
    after_rain.append([0 if r>h else -1 for r in row])
  
  cnt = 1
  for i in range(n):
    for j in range(n):
      if after_rain[i][j] == 0:
        dfs(after_rain, i, j, cnt)
        cnt += 1
  answer = max(answer, cnt-1)

print(answer)