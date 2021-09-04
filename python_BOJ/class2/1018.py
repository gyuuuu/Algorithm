import sys

matrix = []
n, m = map(int, sys.stdin.readline().rstrip().split())
for i in range(n):
  matrix.append(sys.stdin.readline().rstrip())

answer = []
for i in range(n-7):
  for j in range(m-7):
    repaint_w = 0
    repaint_b = 0
    for k in range(i, i+8):
      for l in range(j, j+8):
        if (k+l) % 2 == 0:
          if matrix[k][l] != 'W':
            repaint_w += 1
          if matrix[k][l] != 'B':
            repaint_b += 1
        else:
          if matrix[k][l] != 'B':
            repaint_w += 1
          if matrix[k][l] != 'W':
            repaint_b += 1
    answer.append(repaint_b)
    answer.append(repaint_w)
print(min(answer))