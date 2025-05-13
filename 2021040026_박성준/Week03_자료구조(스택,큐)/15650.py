n,m = list(map(int,input().split()))
s = []
def suyol(start):
    if len(s)==m:
        print(' '.join(map(str,s)))
        return
    
    for i in range(start,n+1):
        if i not in s:
            s.append(i)
            suyol(i+1)
            s.pop()
suyol(1)
