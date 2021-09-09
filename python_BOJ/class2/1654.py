import sys

k, n = map(int, sys.stdin.readline().rstrip().split())
arr = []
for i in range(k):
  arr.append(int(sys.stdin.readline().rstrip()))
start = 1
end = sum(arr) // n
while start <= end:
  mid = (start+end) // 2
  if sum([i // mid for i in arr]) < n:
    end = mid - 1
  else:
    result = mid
    start = mid + 1
print(result)