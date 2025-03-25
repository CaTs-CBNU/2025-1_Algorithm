import sys
T = int(sys.stdin.readline().rstrip())

lst = [list(map(int, sys.stdin.readline().split())) for _ in range(T)]

for i in range(T):
    print(lst[i][0]+lst[i][1])
