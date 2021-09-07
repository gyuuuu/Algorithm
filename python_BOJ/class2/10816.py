import sys
from collections import Counter

def bn_search(num, arr):
  s = 0
  e = len(arr)-1
  index = -1
  while s <= e:
    mid = (s+e) // 2
    if arr[mid] == num:
      index = mid
      break
    elif arr[mid] < num:
      s = mid + 1
    else:
      e = mid -1
  return index

n = int(sys.stdin.readline().rstrip())
sangun = sorted(list(map(int, sys.stdin.readline().rstrip().split())))
counter = Counter(sangun)
m = int(sys.stdin.readline().rstrip())
cards = list(map(int, sys.stdin.readline().rstrip().split()))
cnts = [0 for i in cards]

for i, card in enumerate(cards):
  index = bn_search(card, sangun)
  if counter.get(card) != None:
    cnts[i] += counter.get(card)
for c in cnts:
  print(c, end=' ')