import sys
import math

n = int(sys.stdin.readline().rstrip())
for i in range(n):
  ps = sys.stdin.readline().rstrip()
  if ps[0] == ')' or ps[len(ps)-1] == '(':
    print('NO')
    continue
  cnt = 0
  vps = True
  for b in ps:
    if b == '(':
      cnt += 1
    else:
      cnt -= 1
    if cnt < 0: 
      vps = False
      break
  if vps and cnt == 0:
    print('YES')
  else:
    print('NO')