import sys

cnt = 0

def dfs(n):
  if n > 0:
    dfs(n-1)
    dfs(n-2)
    dfs(n-3)
  else:
    if n == 0:
      global cnt
      cnt += 1
    return

t = int(sys.stdin.readline().rstrip())
for i in range(t):
  n = int(sys.stdin.readline().rstrip())
  cnt = 0
  dfs(n)
  print(cnt)