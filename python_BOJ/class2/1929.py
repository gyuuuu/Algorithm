import sys
import math

m, n = map(int, sys.stdin.readline().rstrip().split())
arr = [True for i in range(n+1)]

for i in range(2, int(math.sqrt(n)) + 1):
  if arr[i]:
    j = 2
    while i*j <= n:
      arr[i*j] = False
      j += 1

for i in range(m, n+1):
  if arr[i] and i != 1:
    print(i)