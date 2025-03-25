import sys

lst = sys.stdin.readline().rstrip()

p = len(lst) // 10 
n = len(lst) % 10

for j in range(p): 
    print(lst[10*j:10*(j+1)])

print(lst[10*p:])
