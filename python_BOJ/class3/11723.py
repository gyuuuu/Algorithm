import sys

m = int(sys.stdin.readline().rstrip())
s = set()
for i in range(m):
  inputs = sys.stdin.readline().rstrip().split()
  if len(inputs) == 1:
    if inputs[0] == 'all':
      s = set([i for i in range(1, 21)])
    elif inputs[0] == 'empty':
      s = set()
  else:
    cmd, x= inputs[0], int(inputs[1])
    if cmd == 'add':
      s.add(x)
    elif cmd == 'remove':
      s.discard(x)
    elif cmd == 'check':
      print(1 if x in s else 0)
    elif cmd == 'toggle':
      if x in s:
        s.discard(x)
      else:
        s.add(x)