import sys

def compression(x, arr):
  start, end = 0, len(arr)-1
  while start <= end:
    mid = (start+end) // 2
    if x < arr[mid]:
      end = mid - 1
    elif x > arr[mid]:
      start = mid + 1
    else:
      return mid

n = int(sys.stdin.readline().rstrip())
X = list(map(int, sys.stdin.readline().rstrip().split()))
# Dict = { x: i for i, x in enumerate(sorted(set(X))) }
X_s = sorted(set(X))

for x in X:
  print(compression(x, X_s), end=' ')