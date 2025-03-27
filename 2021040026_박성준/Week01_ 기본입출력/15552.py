import sys 
n = int(sys.stdin.readline().rstrip())
lst = [list(map(int,sys.stdin.readline().split()))for _ in range(n)]

for i in range(n):
    print(lst[i][0]+lst[i][1])
