import sys

def decomposition(num):
  Sum = 0
  for s in str(num):
    Sum += int(s)
  return Sum

n = int(sys.stdin.readline().rstrip())
constructor = 0
for i in range(1, n):
  if n == i + decomposition(i):
    constructor = i
    break
print(constructor)