import sys

n = int(sys.stdin.readline().rstrip())
people = []
ranking = []
for i in range(n):
  w, h = map(int, sys.stdin.readline().rstrip().split())
  people.append((w, h))

for i in range(n):
  rank = 0
  for j in range(n):
    if people[i][0] < people[j][0] and people[i][1] < people[j][1]:
      rank += 1
  ranking.append(rank+1)

for r in ranking:
  print(r, end=' ')