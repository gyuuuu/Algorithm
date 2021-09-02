import sys

l = [] 
for i in range(11):
  l.append(0)

a = int(sys.stdin.readline().rstrip())
b = int(sys.stdin.readline().rstrip())
c = int(sys.stdin.readline().rstrip())
target = str(a*b*c)

for t in target:
  l[int(t)] += 1
for i in range(0, 10):
  print(l[i])