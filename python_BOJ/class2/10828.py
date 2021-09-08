import sys
from collections import deque

stack = deque()
n = int(sys.stdin.readline().rstrip())
for i in range(n):
  cmd = sys.stdin.readline().rstrip()
  if 'push' in cmd:
    stack.append(cmd.split()[1])
  elif cmd == 'pop':
    if len(stack) == 0:
      print(-1)
    else:
      print(stack.pop())
  elif cmd == 'size':
    print(len(stack))
  elif cmd == 'empty':
    isEmpty = 1 if len(stack) == 0 else 0
    print(isEmpty)
  elif cmd == 'top':
    if len(stack) == 0:
      print(-1)
    else:
      num = stack.pop()
      print(num)
      stack.append(num)
