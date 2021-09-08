import sys

n = int(sys.stdin.readline().rstrip())
arr = []
for i in range(n):
  x, y = map(int, sys.stdin.readline().rstrip().split())
  arr.append((y, x))
for (y, x) in sorted(arr):
  print(x, y)