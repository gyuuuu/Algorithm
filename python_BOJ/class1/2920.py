import sys

l = list(sys.stdin.readline().rstrip().split())
ascending = sorted(l)
descending = sorted(l, reverse=True)

if l == ascending:
  print('ascending')
elif l == descending:
  print('descending')
else:
  print('mixed')