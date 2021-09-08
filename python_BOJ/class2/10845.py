import sys
from collections import deque

q = deque()
n = int(sys.stdin.readline().rstrip())
for i in range(n):
  cmd = sys.stdin.readline().rstrip()
  if 'push' in cmd:
    q.append(cmd.split()[1])
  elif cmd == 'pop':
    if len(q) == 0:
      print(-1)
    else:
      print(q.popleft())
  elif cmd == 'size':
    print(len(q))
  elif cmd == 'empty':
    isEmpty = 1 if len(q) == 0 else 0
    print(isEmpty)
  elif cmd == 'front':
    if len(q) == 0:
      print(-1)
    else:
      num = q.popleft()
      print(num)
      q.appendleft(num)
  elif cmd == 'back':
    if len(q) == 0:
      print(-1)
    else:
      num = q.pop()
      print(num)
      q.append(num)
