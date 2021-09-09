import sys
from collections import deque

t = int(sys.stdin.readline().rstrip())
for i in range(t):
  n, m = map(int, sys.stdin.readline().rstrip().split())
  priority = list(map(int, sys.stdin.readline().rstrip().split()))
  top = max(priority)
  priority = deque([(i, p) for i, p in enumerate(priority)])

  cnt = 0
  while len(priority) > 0:
    if priority[0][1] < top:
      ele = priority.popleft()
      priority.append(ele)
    else:
      ele = priority.popleft()
      cnt += 1
      if ele[0] == m:
        print(cnt)
        break
      top = max([p for i, p in priority]) if len(priority) > 0 else 0