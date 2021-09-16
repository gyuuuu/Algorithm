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
X_s = sorted(set(X))

answer = []
for x in X:
  answer.append(compression(x, X_s))

for a in answer:
  print(a, end=' ')