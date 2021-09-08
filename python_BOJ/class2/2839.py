import sys

n = int(sys.stdin.readline().rstrip())
five_kg = n // 5
cnt = -1
for i in range(five_kg, -1, -1):
  if i == 0:
    cnt = n // 3 if n % 3 == 0 else -1
  elif (n - (5*i)) % 3 == 0:
    cnt = i + ((n - (5*i)) // 3)
    break
print(cnt)