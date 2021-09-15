import sys

def p(arr, n):
  if n > 5:
    for i in range(6, n+1):
      arr[i] = arr[i-1] + arr[i-5]
  return arr[n]

t = int(sys.stdin.readline().rstrip())
for i in range(t):
  n = int(sys.stdin.readline().rstrip())
  arr = [0] * 101
  arr[1], arr[2], arr[3], arr[4], arr[5] = 1, 1, 1, 2, 2
  print(p(arr, n))