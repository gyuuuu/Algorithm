import sys

n = int(sys.stdin.readline().rstrip())
arr = []
pre = 0
for i in range(n):
  if i == 0:
    pre = int(sys.stdin.readline().rstrip())
  else:
    arr.append(int(sys.stdin.readline().rstrip()))

stack = []
result = []
number = 0
for i in range(1, pre+1):
  stack.append(i)
  result.append('+')
  number = i
stack.pop()
result.append('-')

flag = True
for i in arr:
  if i > pre:
    while number < i:
      number += 1
      stack.append(number)
      result.append('+')
    stack.pop()
    result.append('-')
  else:
    if len(stack) > 0 and stack[-1] == i:
      stack.pop()
      result.append('-')
    else:
      flag = False
      break
  pre = i

if flag:
  for i in result:
    print(i)
else:
  print('NO')