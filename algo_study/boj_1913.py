import sys

n = int(sys.stdin.readline().rstrip())
target = int(sys.stdin.readline().rstrip())
target_x, target_y = n // 2, n // 2

direction = [(0,1), (1,0), (0,-1), (-1,0)]
matrix = [[1] * n for i in range(n)]
x, y = n // 2, n // 2
num = 1
right, other = 1, 2
for i in range(n//2):
  x -= 1
  num += 1
  if num == target:
    target_x = x
    target_y = y
  matrix[x][y] = num
  for dx, dy in direction:
    if dx == 0 and dy == 1:
      for r in range(right):
        x += dx
        y += dy
        num += 1
        if num == target:
          target_x = x
          target_y = y
        matrix[x][y] = num
    else:
      for o in range(other):
        x += dx
        y += dy
        num += 1
        if num == target:
          target_x = x
          target_y = y
        matrix[x][y] = num
  right += 2
  other += 2

for row in matrix:
  for col in row:
    print(col, end=' ')
  print()
print(target_x+1, target_y+1)