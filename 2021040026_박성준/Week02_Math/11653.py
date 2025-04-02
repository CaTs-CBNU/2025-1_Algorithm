import sys 
import math

n = int(sys.stdin.readline().rstrip())

def so(num):
    while (num != 1):     
        for i in range(2,num+1):
            if(num % i == 0):
                print(i)
                break
        return so(num//i) 

so(n)
