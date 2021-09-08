import sys

n = int(sys.stdin.readline().rstrip())
S = sys.stdin.readline().rstrip()
hash = 0
for i, s in enumerate(S):
  hash += (ord(s)-96) * (31**i)
print(hash % 1234567891)