import sys

while(True):
  tri = list(map(int, sys.stdin.readline().rstrip().split()))
  tri.sort()
  if tri == [0,0,0]: break
  if tri[2]**2 == tri[0]**2 + tri[1]**2:
    print('right')
  else:
    print('wrong')
