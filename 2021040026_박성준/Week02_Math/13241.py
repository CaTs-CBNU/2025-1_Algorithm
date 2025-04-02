import sys 
n,m = map(int,sys.stdin.readline().split())
a,b =n,m

while b:
    a , b = b , a % b

gcd = a

#최소 공배수
lcm = n*m // gcd

print(lcm)
