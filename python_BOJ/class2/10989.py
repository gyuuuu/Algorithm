import sys

n = int(sys.stdin.readline().rstrip())
arr = [0] * 10001
for i in range(n):
  x = int(sys.stdin.readline().rstrip())
  arr[x] += 1
for i in range(1, 10001):
  if arr[i] != 0:
    for j in range(arr[i]):
      print(i)
