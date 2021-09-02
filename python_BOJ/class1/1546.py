import sys

n = int(sys.stdin.readline().rstrip())
scores = list(map(int, sys.stdin.readline().rstrip().split()))
max_score = max(scores)
new_scores = [s/max_score*100 for s in scores]
print(sum(new_scores)/n)