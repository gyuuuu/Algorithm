import sys
from collections import Counter

n = int(sys.stdin.readline().rstrip())
sangun = Counter(list(map(int, sys.stdin.readline().rstrip().split())))
m = int(sys.stdin.readline().rstrip())
cards = list(map(int, sys.stdin.readline().rstrip().split()))
cnts = [0 for i in cards]

for i, card in enumerate(cards):
  if card in sangun:
    cnts[i] += sangun.get(card)
for c in cnts:
  print(c, end=' ')