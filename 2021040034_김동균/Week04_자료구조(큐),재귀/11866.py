import sys
input=sys.stdin.readline

n, k = map(int, input().rstrip().split())

a = list(range(k,n+1))+list(range(1,k))
rem = []
index=0
for i in range(n):
    rem.append(a[index])
    a[index]=0
    index+=k
    while index >= len(a):
        if not len(a):
                break
        index-=len(a)
        while 0 in a:
            a.remove(0)
            if not len(a):
                break
    if(len(a)==1):
        rem.append(a[0])
        break

print('<', end='')
print(*rem, sep=', ', end='')
print('>')