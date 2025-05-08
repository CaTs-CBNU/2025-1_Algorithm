import sys

n = int(sys.stdin.readline().rstrip())
m = list(map(int, sys.stdin.readline().rstrip().split()))

print(min(m), max(m))
