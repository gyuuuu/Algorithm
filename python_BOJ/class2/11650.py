import sys

n = int(sys.stdin.readline().rstrip())
arr = []
for i in range(n):
  x, y = map(int, sys.stdin.readline().rstrip().split())
  arr.append((x, y))
for (x, y) in sorted(arr):
  print(x, y)