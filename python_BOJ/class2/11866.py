import sys
from collections import deque

Josephus = []
n, k = map(int, sys.stdin.readline().rstrip().split())
circle = [i for i in range(1, n+1)]
index = -1
cnt_k = 0
while len(circle) != 0:
  index += 1
  if index == len(circle):
    index = 0
  cnt_k += 1
  if cnt_k == k:
    Josephus.append(circle[index])
    del circle[index]
    index -= 1
    cnt_k = 0
print('<', end='')
for i, ele in enumerate(Josephus):
  if i == len(Josephus)-1:
    print(ele, end='')
  else:
    print(ele, end=', ')
print('>')