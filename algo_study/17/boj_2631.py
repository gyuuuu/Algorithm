import sys

n = int(sys.stdin.readline().rstrip())
children= []
for _ in range(n):
  children.append(int(sys.stdin.readline().rstrip()))

dp = [0 for _ in range(n)]
for i in range(n):
  dp[i] = 1
  for j in range(i):
    if children[i] < children[j]:
      dp[i] = max(dp[i], dp[j] + 1)

print(n - max(dp))