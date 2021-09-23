import sys

n = int(sys.stdin.readline().rstrip())
m = int(sys.stdin.readline().rstrip())
invalid_btn = list(sys.stdin.readline().rstrip().split()) if m > 0 else []

answer = abs(n - 100)

for channel in range(1000000):
  flag = True
  for btn in str(channel):
    if btn in invalid_btn:
      flag = False
      break
  if flag:
    answer = min(answer, abs(n - channel) + len(str(channel)))

print(answer)