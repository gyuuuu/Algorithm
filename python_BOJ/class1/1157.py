import sys

l = [0 for i in range(42)]
S = sys.stdin.readline().rstrip().lower()
for s in S:
  l[ord(s)-97] += 1

sotred_l = sorted(l)
if sotred_l[-1] == sotred_l[-2]:
  print('?')
else:
  print(chr(l.index(max(l))+97).upper())