import sys
input = sys.stdin.readline

k = int(input().rstrip())
stck=[]
for _ in range(k):
    n=int(input().rstrip())
    if(n==0):
        stck.pop()
    else:
        stck.append(n)
result=0
for i in stck:
    result+=i
print(result)