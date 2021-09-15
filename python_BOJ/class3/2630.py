import sys

matrix = []
n = int(sys.stdin.readline().rstrip())

for i in range(n):
  matrix.append(list(map(int, sys.stdin.readline().rstrip().split())))

def isSameColor(r, c, n):
  color = matrix[r][c]
  for i in range(r, r+n):
    for j in range(c, c+n):
      if matrix[i][j] != color:
        return False
  return True

colors = [0, 0]

def dfs(r, c, n):
  if isSameColor(r, c, n):
    colors[matrix[r][c]] += 1
  else:
    dfs(r, c, n//2)
    dfs(r+n//2, c, n//2)
    dfs(r, c+n//2, n//2)
    dfs(r+n//2, c+n//2, n//2)

dfs(0, 0, n)

for c in colors:
  print(c)