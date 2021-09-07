import sys

n = int(sys.stdin.readline().rstrip())
arr = []
for i in range(n):
  arr.append(int(sys.stdin.readline().rstrip()))
for ele in sorted(arr):
  print(ele)