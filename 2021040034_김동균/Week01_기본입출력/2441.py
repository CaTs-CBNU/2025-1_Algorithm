import sys
input=sys.stdin.readline

n=int(input().rstrip())

for j in range(n,0,-1):
    print(('*'*j).rjust(n))