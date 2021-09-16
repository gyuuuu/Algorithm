import sys

n = int(sys.stdin.readline().rstrip())
times = list(map(int, sys.stdin.readline().rstrip().split()))

result = [0] * n
result[0] = min(times)
for i, t in enumerate(sorted(times)[1:]):
  result[i+1] = result[i] + t
print(sum(result))