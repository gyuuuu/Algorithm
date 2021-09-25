import sys

n = int(sys.stdin.readline().rstrip())
loss = list(map(int, sys.stdin.readline().rstrip().split()))
happy = list(map(int, sys.stdin.readline().rstrip().split()))
dp = [[0] * 101 for _ in range(n+1)]

for i in range(1, n+1):
  for j in range(100):
    if j < loss[i-1]:
      dp[i][j] = dp[i-1][j]
    else:
      dp[i][j] = max(dp[i-1][j], dp[i-1][j-loss[i-1]] + happy[i-1])

print(dp[n][99])