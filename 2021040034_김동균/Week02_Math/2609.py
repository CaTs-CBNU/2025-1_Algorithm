import sys

def gcd(a,b):
    if(a<b):
        temp=a
        a=b
        b=temp
    if(b == 0):
        return a
    return gcd(b, a%b)
        
def lcm(a,b):
    if(a<b):
        temp=a
        a=b
        b=temp
    return int((a*b)/gcd(a,b))

input = sys.stdin.readline().rstrip()
a, b = map(int, input.split())
print(gcd(a,b))
print(lcm(a,b))