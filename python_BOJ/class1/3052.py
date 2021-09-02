import sys

l = [0 for i in range(42)]
for i in range(10):
  n = int(sys.stdin.readline().rstrip())
  l[n%42] += 1

result = 0
for i in l:
  if i != 0:
    result += 1
print(result)