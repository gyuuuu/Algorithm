import sys
import re

while True:
  sentence = sys.stdin.readline()[:-1]
  if sentence == '.': break
  parenthesis = re.sub('[A-Za-z.]','' ,sentence).replace(' ', '')
  stack = []
  isYes = True
  if parenthesis == '':
    print('yes')
    continue
  for p in parenthesis:
    if p == '[' or p == '(':
      stack.append(p)
    else:
      if len(stack) == 0:
        isYes = False
        break
      if p == ']':
        if stack[-1] != '[':
          isYes = False
          break
        else:
          stack.pop()
      elif p == ')':
        if stack[-1] != '(':
          isYes = False
          break
        else:
          stack.pop()
  if isYes and len(stack) == 0:
    print('yes')
  else:
    print('no')