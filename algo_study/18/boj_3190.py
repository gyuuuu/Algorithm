import sys

# input
n = int(sys.stdin.readline().rstrip())
k = int(sys.stdin.readline().rstrip())

moveOfSnake = []
matrix = [[0]*(n+1) for _ in range(n+1)]

for _ in range(k):
  x, y = map(int, sys.stdin.readline().rstrip().split())
  matrix[x][y] = 1

l = int(sys.stdin.readline().rstrip())
for _ in range(l):
  x, c = sys.stdin.readline().rstrip().split()
  moveOfSnake.append((int(x), c))

direction = [(0,1), (1,0), (0,-1), (-1,0)]

def change_direction(i, c):
  if c == 'L':
    i = (i-1) % 4
  elif c == 'D':
    i = (i+1) % 4
  return i

def simulate():
  time, x, y = 0, 1, 1
  matrix[x][y] = 2
  direction_index = 0
  moveOfSnakeIndex = 0
  snake = [(x, y)]
  while True:
    time += 1
    nx = x + direction[direction_index][0]
    ny = y + direction[direction_index][1]
    if 1 <= nx and 1 <= ny and nx <= n and ny <= n and matrix[nx][ny] != 2:
      if matrix[nx][ny] == 0:
        matrix[nx][ny] = 2
        snake.append((nx, ny))
        sx, sy = snake.pop(0)
        matrix[sx][sy] = 0
      if matrix[nx][ny] == 1:
        matrix[nx][ny] = 2
        snake.append((nx, ny))
    else:
      break
    x, y = nx, ny
    if moveOfSnakeIndex < l and time == moveOfSnake[moveOfSnakeIndex][0]:
      direction_index = change_direction(direction_index, moveOfSnake[moveOfSnakeIndex][1])
      moveOfSnakeIndex += 1
  return time

print(simulate())