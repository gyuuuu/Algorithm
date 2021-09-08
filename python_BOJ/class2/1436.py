import sys

n = int(sys.stdin.readline().rstrip())
k = 0
movie = 666
while True:
  if '666' in str(movie):
    k += 1
  if k == n:
    print(movie)
    break
  movie += 1