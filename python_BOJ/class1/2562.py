import sys

max_n = -1
index = 0
for i in range(9):
  n = int(sys.stdin.readline())
  if max_n < n:
    max_n = n
    index = i+1

print(max_n)
print(index)