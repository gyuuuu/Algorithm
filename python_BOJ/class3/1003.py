import sys


t = int(sys.stdin.readline().rstrip())
for i in range(t):
  n = int(sys.stdin.readline().rstrip())
  zero = [0] * 41
  one = [0] * 41
  zero[0] = 1
  one[1] = 1
  for j in range(2, n+1):
    zero[j] = zero[j-2] + zero[j-1]
    one[j] = one[j-2] + one[j-1]
  print(zero[n], one[n])