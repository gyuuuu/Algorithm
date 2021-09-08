import sys


n = int(sys.stdin.readline().rstrip())
room = 1
cnt = 1
while True:
  if room >= n:
    print(cnt)
    break
  room += 6*cnt
  cnt += 1