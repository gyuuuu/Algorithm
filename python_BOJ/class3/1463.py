import sys

n = int(sys.stdin.readline().rstrip())
dp = [sys.maxsize] * (1000001)
dp[1], dp[2], dp[3] = 0, 1, 1

for i in range(4, n+1):
  if i % 6 == 0:
    dp[i] = 1 + min(dp[i-1], dp[i//2], dp[i//3])
  elif i % 3 == 0:
    dp[i] = 1 + min(dp[i-1], dp[i//3])
  elif i % 2 == 0:
    dp[i] = 1 + min(dp[i-1], dp[i//2])
  else:
    dp[i] = 1 + dp[i-1]

print(dp[n])