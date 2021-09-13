import sys

n, m = map(int, sys.stdin.readline().rstrip().split())
memo = {}
for i in range(n):
  site, password = sys.stdin.readline().rstrip().split()
  memo[site] = password

for i in range(m):
  print(memo.get(sys.stdin.readline().rstrip()))