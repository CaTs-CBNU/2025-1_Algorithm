from itertools import permutations
import sys

N, M = map(int, sys.stdin.readline().strip().split())
array = range(1, N+1)

for i in list(permutations(array,M)):
    print(*i)