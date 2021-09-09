import sys

n, m = map(int, sys.stdin.readline().rstrip().split())
trees = list(map(int, sys.stdin.readline().rstrip().split()))

start = 0
end = max(trees)
result = 0
while start <= end:
  mid = (start+end) // 2
  if sum([tree-mid if tree-mid >= 0 else 0 for tree in trees]) >= m:
    start = mid + 1
    result = mid
  else:
    end = mid - 1
print(result)