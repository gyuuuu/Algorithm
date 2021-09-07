import sys

n =  int(sys.stdin.readline().rstrip())
words = set()
for i in range(n):
  words.add(sys.stdin.readline().rstrip())

len_with_word = [(len(word), word) for word in words]
for (l, word) in sorted(len_with_word):
  print(word)