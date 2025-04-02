import sys 

a,b = map(int, sys.stdin.readline().split())
tmp = 0
lst = []

#최대 공약수 
if (a > b):
    for i in range(1,b+1):
        if(b%i==0 and a%i==0):
            gcd = i
else:
    for i in range(1,a+1):
        if(b%i==0 and a%i==0):
            gcd = i
#최소 공배수
lcm = a*b // gcd

print(gcd)
print(lcm)

