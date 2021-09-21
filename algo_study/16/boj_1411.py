import sys

def make_pattern(word):
  pattern_map = {}
  pattern = ''
  cnt = 0
  for w in word:
    if w not in pattern_map:
      cnt += 1
      pattern_map[w] = str(cnt)
    pattern += pattern_map[w]
  return pattern

n = int(sys.stdin.readline().rstrip())
patterns = []
for i in range(n):
  patterns.append(make_pattern(sys.stdin.readline().rstrip()))

answer = 0
for i in range(len(patterns)):
  for j in range(i+1, len(patterns)):
    if patterns[i] == patterns[j]:
      answer += 1

print(answer)