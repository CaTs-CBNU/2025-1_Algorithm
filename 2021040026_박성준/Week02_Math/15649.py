import sys 
import itertools

n,r = map(int,sys.stdin.readline().split())
arr = [i+1 for i in range(n)]
nPr = list(itertools.permutations(arr,r))

for i in range(len(nPr)):
    q = [*nPr[i]]
    print(*q)
