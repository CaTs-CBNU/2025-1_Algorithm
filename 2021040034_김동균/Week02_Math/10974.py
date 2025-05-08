from itertools import permutations
import sys

N = int(sys.stdin.readline().strip())
array = range(1, N+1)

for i in list(permutations(array)):
    print(*i)