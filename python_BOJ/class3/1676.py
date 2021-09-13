import sys
import math

n = int(sys.stdin.readline().rstrip())
fac = str(math.factorial(n))
cnt = 0
for s in reversed(fac):
  if s != '0':
    break
  else:
    cnt += 1
print(cnt)