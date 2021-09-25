import sys
from collections import deque

def D(n, cmd):
  return (n*2) % 10000 if n*2 > 9999 else n*2, cmd + 'D'

def S(n, cmd):
  return n-1 if n != 0 else 9999, cmd + 'S'

def L(n, cmd):
  # n = str(n)
  # while len(n) < 4:
  #   n = '0' + n
  # new_n = n[1] + n[2] + n[3] + n[0]

  # n = 1234
  front = n % 1000 # 234
  back = n // 1000 # 1
  return front*10 + back, cmd + 'L'
  # return new_n, cmd + 'L'

def R(n, cmd):
  # n = str(n)
  # while len(n) < 4:
  #   n = '0' + n
  # new_n = n[3] + n[0] + n[1] + n[2]

  # n = 1234
  front = n % 10 # 4
  back = n // 10 # 123
  return front*1000 + back, cmd + 'R'
  # return new_n, cmd + 'R'

funcs = [D, S, L, R]

def bfs(a, target):
  q = deque()
  visit = [0 for _ in range(10000)]
  q.append((a, ''))
  visit[a] = 1

  while q:
    n, cmd = q.popleft()
    if n == target:
      return cmd

    for func in funcs:
      new_n, new_cmd = func(n, cmd)
      if visit[new_n] == 0:
        visit[new_n] = 1
        q.append((new_n, new_cmd))

t = int(sys.stdin.readline().rstrip())

for _ in range(t):
  a, b = map(int, sys.stdin.readline().rstrip().split())
  if a == b:
    print('')
  else:
    print(bfs(a, b))