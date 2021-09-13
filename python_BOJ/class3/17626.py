import sys
import math

n = int(sys.stdin.readline().rstrip())
dp = [1 if math.sqrt(i)-int(math.sqrt(i)) == 0 else 5 for i in range(n+1)]

for i in range(1, n+1):
  for j in range(int(math.sqrt(i)), 0, -1):
    dp[i] = min(dp[i], dp[j*j] + dp[i - (j*j)])

print(dp[n])