import sys

k = int(sys.stdin.readline().rstrip())
stack = []
for i in range(k):
  n = int(sys.stdin.readline().rstrip())
  if n != 0:
    stack.append(n)
  else:
    if len(stack) != 0:
      stack.pop()
print(sum(stack))