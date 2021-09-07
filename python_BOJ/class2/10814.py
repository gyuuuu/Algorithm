import sys

n = int(sys.stdin.readline().rstrip())
arr = []
for i in range(n):
  age, name = sys.stdin.readline().rstrip().split()
  arr.append((int(age), i, name))
for (age, i, name) in sorted(arr):
  print(age, name)