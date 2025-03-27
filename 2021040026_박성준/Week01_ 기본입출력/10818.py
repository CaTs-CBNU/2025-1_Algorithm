import sys 
n = int(sys.stdin.readline().rstrip())
lst = list(map(int,sys.stdin.readline().split()))

tmp_max = -99999999999
tmp_min = 99999999999

for i in range(n):
    if(lst[i] > tmp_max):    
        tmp_max = lst[i]
    else:
        continue

for i in range(n):
    if(lst[i] < tmp_min):    
        tmp_min = lst[i]
    else:
        continue

print(tmp_min, tmp_max)
