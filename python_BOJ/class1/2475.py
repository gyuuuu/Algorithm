import sys

nums = list(map(int, sys.stdin.readline().rstrip().split()))
print(sum([n*n for n in nums]) % 10)