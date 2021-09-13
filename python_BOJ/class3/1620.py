import sys
import math

n, m = map(int, sys.stdin.readline().rstrip().split())
collection = []
for i in range(n):
  collection.append(sys.stdin.readline().rstrip())
for i in range(m):
  q = sys.stdin.readline().rstrip()
  if q.isnumeric():
    print(collection[int(q)-1])
  else:
    print(collection.index(q)+1)