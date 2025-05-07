import sys

def eratosthenes(num, array):
    i=0
    while(array[i]==0):
        i+=1     
    j = array[i]
    for k in range(i, len(array)):
            if(array[k]==0):continue
            if(array[k] % j == 0): 
                num -= 1
                if(num == 0):
                    return array[k]
                array[k]=0
    return eratosthenes(num, array)
            
N, num = map(int, sys.stdin.readline().strip().split())
array = list(range(2, N+1))
print(eratosthenes(num, array))


