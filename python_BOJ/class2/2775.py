import sys

def recursive(arr, k, n):
  if arr[k][n] != 0:
    return arr[k][n]
  total = 0
  for i in range(1, n+1):
    total += recursive(arr, k-1, i)
  arr[k][i] = total
  return total

t = int(sys.stdin.readline().rstrip())
for i in range(t):
  apart = []
  k = int(sys.stdin.readline().rstrip())
  n = int(sys.stdin.readline().rstrip())
  for j in range(k+1):
    if j == 0:
      apart.append([i for i in range(n+1)])
    else:
      apart.append([0 for i in range(n+1)])
  print(recursive(apart, k, n))