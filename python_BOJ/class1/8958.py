import sys

n = int(sys.stdin.readline().rstrip())
for i in range(n):
  answer = sys.stdin.readline().rstrip()
  total = 0
  score = 0
  for a in answer:
    score = 0 if a == 'X' else score+1
    total += score
  print(total)