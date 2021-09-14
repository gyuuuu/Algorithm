import sys
from collections import deque

n = int(sys.stdin.readline().rstrip())
m = int(sys.stdin.readline().rstrip())
matrix = [[0] * (n+1) for i in range(n+1)]
for i in range(m):
  a, b = map(int, sys.stdin.readline().rstrip().split())
  matrix[a][b] = 1
  matrix[b][a] = 1

cnt = 0
q = deque()
visit = [0] * (n+1)
visit[1] = 1
q.append(1)
while q:
  com = q.popleft()
  for i in range(1, n+1):
    if matrix[com][i] == 1 and visit[i] == 0:
      q.append(i)
      visit[i] = 1
      cnt += 1
print(cnt)