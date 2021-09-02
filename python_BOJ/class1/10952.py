import sys

lines = sys.stdin.readlines()
for line in lines:
  a,b = map(int, line.split())
  if a != 0 and b!= 0:
    print(a+b)