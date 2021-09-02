import sys

t = int(sys.stdin.readline().rstrip())
for i in range(t):
  r, S = sys.stdin.readline().rstrip().split()
  for s in S:
    for j in range(int(r)):
      print(s, end='')
  print()