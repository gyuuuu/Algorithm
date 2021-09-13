import sys

n, m = map(int, sys.stdin.readline().rstrip().split())
canthear = set()
cantsee = set()
for i in range(n):
  canthear.add(sys.stdin.readline().rstrip())
for i in range(m):
  cantsee.add(sys.stdin.readline().rstrip())

canthearsee = canthear & cantsee
print(len(canthearsee))
for i in sorted(canthearsee):
  print(i)