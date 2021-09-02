import sys

x, y, w, h = map(int, sys.stdin.readline().rstrip().split())
dist = [abs(w-x), abs(h-y), abs(0-x), abs(0-y)]
print(min(dist))