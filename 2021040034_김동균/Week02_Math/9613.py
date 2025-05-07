import sys

def gcd(a,b):
    if(a<b):
        temp=a
        a=b
        b=temp
    if(b == 0):
        return a
    return gcd(b, a%b)
        
input = sys.stdin.readline().strip()
n = int(input)
result = 0
final_result = []
a = []
for i in range(n):
    input = sys.stdin.readline().strip()
    a = list(map(int, input.split()))
    for j in range(1, len(a)):
        for k in range(j+1, len(a)):
            if(k<=j): break
            result += gcd(a[j], a[k])
    final_result.append(result)
    result = 0
for i in final_result:
    print(i)