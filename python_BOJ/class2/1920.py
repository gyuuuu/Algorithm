import sys

def binary_search(num, arr):
  start = 0
  end = len(arr)-1
  while start <= end:
    mid = (start+end) // 2
    if arr[mid] == num:
      return 1
    elif arr[mid] < num:
      start = mid + 1
    else :
      end = mid - 1
  return 0

n = int(sys.stdin.readline().rstrip())
a = list(map(int, sys.stdin.readline().rstrip().split()))
m = int(sys.stdin.readline().rstrip())
target = list(map(int, sys.stdin.readline().rstrip().split()))
a = sorted(a)
for t in target:
  print(binary_search(t, a))