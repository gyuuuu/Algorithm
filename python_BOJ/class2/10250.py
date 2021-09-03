import sys

t = int(sys.stdin.readline().rstrip())
for i in range(t):
  h, w, n = map(int, sys.stdin.readline().rstrip().split())
  room = ''
  if n%h==0:
    x = str(h)
    y = str(n//h) if n//h>=10 else '0'+str(n//h)
    room = x + y
  else:
    x = str(n%h)
    y = str(n//h+1) if n//h+1>=10 else '0'+str(n//h+1)
    room = x + y
  print(room)