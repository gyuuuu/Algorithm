import sys
import math

def isPrime(num):
  for i in range(2, int(math.sqrt(num))+1):
    if num % i == 0:
      return False
  return True

n = int(sys.stdin.readline().rstrip())
arr = map(int, sys.stdin.readline().rstrip().split())
answer = 0
for i in arr:
  if i >= 2 and isPrime(i):
    answer += 1
print(answer)