import sys
from itertools import combinations

n, m = map(int, sys.stdin.readline().rstrip().split())
cards = list(map(int, sys.stdin.readline().rstrip().split()))
combi = list(combinations(cards, 3))

result = 0
for c in combi:
  score = sum(c)
  if score <= m and result < score:
    result = score

print(result)