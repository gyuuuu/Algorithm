import sys
from collections import Counter

n = int(sys.stdin.readline().rstrip())
arr = []
for i in range(n):
  arr.append(int(sys.stdin.readline().rstrip()))
arr = sorted(arr)
counter = Counter(arr)
print(round(sum(arr) / n))
print(arr[n//2])
if len(counter) > 1:
  print(counter.most_common()[1][0] if counter.most_common()[0][1] == counter.most_common()[1][1] else counter.most_common()[0][0])
else:
  print(counter.most_common(1)[0][0])
print(arr[-1] - arr[0])