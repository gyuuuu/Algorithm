import sys

n = int(sys.stdin.readline().rstrip())
stairs = [0] * (n+1)
dp = [0] * (n+1)
for i in range(n):
  stairs[i] = int(sys.stdin.readline().rstrip())

dp[0] = stairs[0]
dp[1] = max(stairs[0] + stairs[1], stairs[1])

for i in range(2, n):
  dp[i] = stairs[i] + max(stairs[i-1] + dp[i-3], dp[i-2])

print(dp[n-1])