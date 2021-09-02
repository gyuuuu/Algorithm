import sys

n = int(sys.stdin.readline().rstrip())
lists = list(map(int, sys.stdin.readline().rstrip().split()))

print(min(lists), max(lists))