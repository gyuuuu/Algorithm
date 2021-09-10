import sys

h, m = map(int, sys.stdin.readline().rstrip().split())
new_m = m-45 if m-45 >= 0 else 60 + (m-45)
new_h = h-1 if m-45 < 0 else h
print(new_h if new_h >= 0 else 23, new_m)