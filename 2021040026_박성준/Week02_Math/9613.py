import sys 
t = int(sys.stdin.readline().rstrip()) 
lst = [list(map(int,sys.stdin.readline().split()))for _ in range(t)]
#lst = [n for x in lst for n in x]

sum =0 

for k in range(t):
    for i in range(1,len(lst[k])):
        for j in range(i+1,len(lst[k])):
            #print(a,b)
            n,m = lst[k][i],lst[k][j]
            while m:
                n , m = m , n % m
            gcd = n
            sum += gcd
    print(sum)
    sum =0 



