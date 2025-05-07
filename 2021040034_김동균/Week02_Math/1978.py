import sys

def eratosthenes(max):
    
    array = list(range(2, max+1))
    for j in range(0, len(array)):
        for k in range(j+1, len(array)):
            if(k >= len(array)): break
            if(array[k] % array[j] == 0): array.remove(array[k])
    return array
         
            
count = 0
n = int(sys.stdin.readline().strip())
input = list(map(int, sys.stdin.readline().strip().split()))
for i in eratosthenes(max(input)):
    for j in input:
        if i == j: count+=1

print(count)

