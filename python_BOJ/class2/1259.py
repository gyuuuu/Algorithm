import sys

while(True):
  n = sys.stdin.readline().rstrip()
  if n == '0': break
  stack = []
  for i in range(len(n)//2):
    stack.append(n[i])
  index = len(n)//2 if len(n)%2==0 else len(n)//2 + 1
  lsPalindrom = True
  for i in range(index, len(n)):
    if stack.pop() != n[i]:
      print('no')
      lsPalindrom = False
      break
  if lsPalindrom:
    print('yes')