import sys

n = int(sys.stdin.readline().rstrip())
S = sys.stdin.readline().rstrip()
result = 0
for s in S:
  result += int(s)
print(result)