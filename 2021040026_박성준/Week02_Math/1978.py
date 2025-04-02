import sys 
import math

t = int(sys.stdin.readline().rstrip())
lst = list(map(int,sys.stdin.readline().split()))
cnt = 0
k= []
for i in lst:
    if i == 1:
        cnt += 1
    for j in range(2,int(math.sqrt(i)+1)):
        if(i % j == 0):
            k.append(i)
            break
#print(k)
print(len(lst)-len(k)-cnt)
