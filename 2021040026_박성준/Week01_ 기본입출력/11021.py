import sys

T = int(sys.stdin.readline().rstrip())
lst = []

for i in range(T):
    lst.append(list(map(int,sys.stdin.readline().split())))

for i in range(T):
    print(f"Case #{i+1}: {lst[i][0] + lst[i][1]}")
