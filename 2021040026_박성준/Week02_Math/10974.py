import sys 
import itertools

n = int(sys.stdin.readline().rstrip())
arr = [i+1 for i in range(n)]
nPr = list(itertools.permutations(arr))

for i in range(len(nPr)):
    q = [*nPr[i]]
    print(*q)
