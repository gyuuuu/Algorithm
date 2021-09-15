import sys
from itertools import combinations

t = int(sys.stdin.readline().rstrip())
for i in range(t):
  n = int(sys.stdin.readline().rstrip())

  closet = {}
  for i in range(n):
    name, kind = sys.stdin.readline().rstrip().split()
    if kind not in closet:
      closet[kind] = 1
    else:
      closet[kind] += 1

  result = 1
  for key in closet.keys():
    result *= closet[key] + 1
  print(result - 1)