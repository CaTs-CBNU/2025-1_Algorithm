import sys
from itertools import combinations
input = sys.stdin.readline
n, m = map(int, input().rstrip().split())
arr=range(1,n+1)

result = combinations(arr, m)
for i in result:
    print(*i)