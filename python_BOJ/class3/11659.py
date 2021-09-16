import sys

n, m = map(int, sys.stdin.readline().rstrip().split())
nums = list(map(int, sys.stdin.readline().rstrip().split()))
for i, n in enumerate(nums[1:]):
  nums[i+1] = nums[i] + nums[i+1]

for _ in range(m):
  i, j = map(int, sys.stdin.readline().rstrip().split())
  print(nums[j-1] if i == 1 else nums[j-1]-nums[i-2])