import sys

a, b = sys.stdin.readline().rstrip().split()
a = a[::-1]
b = b[::-1]
print(max(int(a), int(b)))