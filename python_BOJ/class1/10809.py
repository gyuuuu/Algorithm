import sys

l = [-1 for i in range(26)]
S = sys.stdin.readline().rstrip()
index = 0
for s in S:
  if l[ord(s)-97] == -1:
    l[ord(s)-97] = index
  index += 1
for i in l:
  print(i)